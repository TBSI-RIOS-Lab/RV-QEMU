#include <linux/types.h>
#include <linux/string.h>
#include <malloc.h>

char * strchr(const char * s, int c)
{
	for(; *s != (char) c; ++s)
		if (*s == '\0')
			return NULL;
	return (char *) s;
}
