#include "../includes/libft.h"

/*
* This function copies up to size - 1 characters from the string src to dst,
* The last character of dst is always set to the null character ('\0').
* Then it returns the length of src.
*/

size_t ft_strlcpy(char* dst, const char* src, size_t size) {

	size_t i;

	if (size == 0) {
		dst[0] = '\0';
		return ft_strlen(src);
	}

	i = 0;
	while (i < size - 1 && src[i] != '\0') {
		dst[i] = src[i];
		i++;
	}

	dst[i] = '\0';

	return ft_strlen(src);
}