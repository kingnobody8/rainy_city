#pragma once

namespace util
{
	enum EDirection
	{
		INVALID_DIRECTION = -1,
		UP, RIGHT, DOWN, LEFT, CARDINAL_DIRECTIONS_COUNT,
		NORTH = UP, EAST, SOUTH, WEST,
		UP_RIGHT, DOWN_RIGHT, DOWN_LEFT, UP_LEFT, ORDINAL_DIRECTIONS_COUNT,
		NE = UP_RIGHT, SE, SW, NW,
	};

	enum ENinePatch
	{
		INVALID_NINEPATCH = -1,
		TOP_LEFT, TOP_MID, TOP_RIGHT,
		MID_LEFT, MID_MID, MID_RIGHT,
		BOT_LEFT, BOT_MID, BOT_RIGHT,
		NINEPATCH_COUNT
	};

	enum EAxis
	{
		INVALID_AXIS = -1,
		AXIS_X, AXIS_Y, AXIS_Z,
		AXIS_LATERAL = AXIS_X, AXIS_VERTICAL, AXIS_ZED,
		AXIS_COUNT
	};

	enum ELateral
	{
		INVALID_LATERAL = -1,
		L_LEFT, L_MID, L_RIGHT
	};

	enum EVertical
	{
		INVALID_VERTICAL = -1,
		V_TOP, V_MID, V_BOT
	};

	enum ECoordinateSystem
	{
		INVALID_COORDINATE = -1,
		CARTESIAN, INVERTED,
		COORDINATE_SYSTEM_COUNT
	};
}
