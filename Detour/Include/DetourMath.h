#ifndef DETOURMATH_H
#define DETOURMATH_H

/**
@defgroup detour Detour

Members in this module are wrappers around the standard math library

*/

#if 0
#	include <math.h>

#	define dtMathFabs(x) fabs(x)
#	define dtMathSqrtf(x) sqrtf(x)
#	define dtMathFloorf(x) floorf(x)
#	define dtMathCeilf(x) ceilf(x)
#	define dtMathCosf(x) cosf(x)
#	define dtMathSinf(x) sinf(x)
#	define dtMathAtan2f(y, x) atan2f(y, x)
#else
#	include <sunmath.h>

#	define dtMathFabs(x) sunmath::fabs(x)
#	define dtMathSqrtf(x) sunmath::sqrtf(x)
#	define dtMathFloorf(x) sunmath::floorf(x)
#	define dtMathCeilf(x) sunmath::ceilf(x)
#	define dtMathCosf(x) sunmath::cosf(x)
#	define dtMathSinf(x) sunmath::sinf(x)
#	define dtMathAtan2f(y, x) sunmath::atan2f(y, x)
#endif
#include <math.h>

#endif
