#include "Base/Ref.h"
#include "Base/Macros.h"

namespace Rio
{
  
	Ref::Ref()
	{
	}

	Ref::~Ref()
	{
	}

	void Ref::retain()
	{
		RIO_ASSERT(referenceCount > 0, "reference count should be > 0");
		++referenceCount;
	}

	void Ref::release()
	{
		RIO_ASSERT(referenceCount > 0, "reference count should be > 0");
		--referenceCount;

		if (referenceCount == 0)
		{
			delete this;
		}
	}

	Ref* Ref::autorelease()
	{
    // TODO
		return this;
	}

	uint32_t Ref::getReferenceCount() const
	{
		return referenceCount;
	}

} // namespace Rio