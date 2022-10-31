#pragma once

#include "Base/Ref.h"

namespace Rio
{
	class RIO_DLL Node : public Ref
	{
	public:
		virtual void addChild(Node* child);
	};
} // namespace Rio