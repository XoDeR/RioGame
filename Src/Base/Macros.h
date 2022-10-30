#pragma once

#include <assert.h>

#ifndef RIO_ASSERT
    #ifndef NDEBUG
        #define RIO_ASSERT(cond, msg) RIO_CASSERT(cond)
    #else
        #define RIO_ASSERT(cond, msg)
    #endif
#endif  // RIO_ASSERT

#define RIO_CASSERT(cond) assert(cond)