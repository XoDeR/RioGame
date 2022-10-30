#pragma once

namespace Rio
{
  // Reference counting base class
	class RIO_DLL Ref
	{
	public:
		// increase reference count by 1
		void retain();
		
		// decrement ref count by 1
		// if it's 0 after the decrement, the Ref is destructed
		void release();

		// decrements ref count at the end of autorelease pool block
		// if it's 0 after the decrement, the Ref is destructed
		Ref* autorelease();

		uint32_t getReferenceCount() const;

	protected:
		// The reference count is 1 after construction
		Ref();

	public:
		virtual ~Ref();

	protected:
		uint32_t referenceCount = 1;
	};
} // namespace Rio