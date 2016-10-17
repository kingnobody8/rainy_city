#include "setup_state.h"

#include "input/input_plugin.h"
#include "render/render_plugin.h"
#include "state/state_plugin.h"

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "rapidjson/FileReadStream.h"
#include <cstdio>
#include "resource/json.h"

#include "input/input_event.h"

namespace baka
{
	namespace state
	{
		SetupState::SetupState()
			: m_pTransitionState(null)
		{
			this->m_name = "SetupState";
		}

		VIRTUAL SetupState::~SetupState()
		{
		}

		VIRTUAL void SetupState::Init()
		{
			__todo() //use the resource loader when it is finished
			//Initial loading

			srand(unsigned int(util::Time::GetTimeSinceEpoch().Milli()));

			//Setup the window
			render::RenderPlugin* pRenderPlugin = new render::RenderPlugin();
			IPlugin::AddPlugin(pRenderPlugin);

			//Setup input
			InputPlugin* pInputPlugin = new InputPlugin();
			pInputPlugin->SetSFMLWin(pRenderPlugin->GetRenderWindow());
			IPlugin::AddPlugin(pInputPlugin);

			//Setup first state
			//state::StatePlugin* pStatePlugin = static_cast<state::StatePlugin*>(IPlugin::FindPlugin(state::StatePlugin::Type));
			//pStatePlugin->TransitionState(m_pTransitionState);

			mouse_events::s_InputMouseScrollWheel.Subscribe(&sub, BIND1(this, &SetupState::OnScroll));
		}

		VIRTUAL const std::string SetupState::DebugRender(const sf::RenderWindow* pRenWin)
		{
			return "Hello There from the setup state";
		}

		void SetupState::OnScroll(const mouse_events::WheelAction& action)
		{
		}

		VIRTUAL void SetupState::Exit()
		{
		}
	}
}