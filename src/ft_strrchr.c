#include "../includes/libft.h"
#include <string.h>

char* ft_strrchr(const char* s, int c) {

	char* last = NULL;
	while (*s) {
		if (*s == (char)c) {
			last = (char*)s;
		}
		s++;
	}

	if ((char)c == '\0') {
		return (char*)s;
	}

	return last;
}