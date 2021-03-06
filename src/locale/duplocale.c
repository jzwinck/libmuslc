/* @LICENSE(MUSLC_MIT) */

#include <stdlib.h>
#include <string.h>
#include "locale_impl.h"

locale_t duplocale(locale_t old)
{
	locale_t new;
	new = calloc(1, sizeof *new);
	if (new && old != LC_GLOBAL_LOCALE) memcpy(new, old, sizeof *new);
	return new;
}
