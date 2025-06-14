#include "../includes/libft.h"

/**
* Verify that the character is a digit (0-9) based on ASCII values
* 
* Which means this function should only return 1 (true) if a CHARACTER (not a raw integer) 
* is between 48-57 (0-9 in ASCII).
* The parameter is int to match standard library conventions but C
* converts characters to their ASCII values when passed as an int. 
* This means that 'A' turns into 65, '0' into 48, and so on.
* 
* For example, '1' is 49 in ASCII, which is a digit (return 1), but 1 as an integer is not a digit (return 0).
* The integer 1 is 00000001 in binary, while '1' as a character is 00110001 
* 00110001 is 49, which, in turn, is the digit 1 in ASCII (and it's between 48 and 57).
* 
* Therefore, this function checks if the character is between '0' (48) and '9' (57) in ASCII.
* Values outside 48-57 range (like '3000', '-10', or 'A'), raw integers, or non-ASCII characters will return 0.
*/

int ft_isdigit(int c) {

	if (c >= '0' && c <= '9') {
		return 1;
	}

    return 0;   
}