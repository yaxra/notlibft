#include "../includes/libft.h"

/*
* This function compares the first n bytes of two strings (s1 and s2).
* In case of difference, it returns the difference between the first differing characters.
* In case of no difference, it returns 0.
*/

int ft_strncmp(const char *s1, const char *s2, size_t n) {

	size_t i = 0;
	while (i < n) {
		// unsigned char cast means that the comparison is done in a way 
		// that avoids issues with negative values.
		if ((unsigned char)s1[i] != (unsigned char)s2[i] || s1[i] == '\0' || s2[i] == '\0') {
			return (unsigned char)s1[i] - (unsigned char)s2[i];
		}

		i++;
	}

	return 0;
}