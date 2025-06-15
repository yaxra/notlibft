#include "../includes/libft.h"

/*
* Printable characters are those that are visible on the screen, including whitespace characters.
* Escape sequences like newline (\n) or tab (\t) are not considered printable.
* Therefore, the range of printable characters in ASCII is from 32 (space) to 126 (tilde ~).
*/

int ft_isprint(int c) {
	if (c >= 32 && c <= 126) {
		return 1;
	}

	return 0;
}