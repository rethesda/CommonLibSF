#pragma once

#include "NiPoint.h"

namespace RE
{
	class NiBound
	{
	public:
		// members
		NiPoint3 center;  // 00
		float    radius;  // 0C
	};
	static_assert(sizeof(NiBound) == 0x10);
}
