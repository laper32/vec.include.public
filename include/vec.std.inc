#if defined _vec_std_included
#endinput
#endif

#define _vec_std_included

#define inline stock

#include <vec.std/tools>

public Extension __ext_vec_std =
{
	name = "Vector community - Standard Library",
	file = "vec.std.ext",
#if defined AUTOLOAD_EXTENSIONS
	autoload = 1,
#else
	autoload = 0,
#endif
#if defined REQUIRE_EXTENSIONS
	required = 1,
#else
	required = 0,
#endif
};

