#include "../includes/libft.h"

/*
* Pointers in C are variables that store the memory address of another variable.
* This function iterates through the characters in the string 
* and checks if the current character matches the character 'c', returning the pointer of the first occurrence.
* The terminating null character is also checked, returning a pointer to it if 'c' is '\0'.
*/

char* ft_strchr(const char* s, int c)
{
	while (*s) { // *s with the * dereference operator checks the character at the current pointer location
		if (*s == (char)c) { // (char)c is used to ensure c is treated as a character, not as int

			// turns the const char* pointer into a char* pointer (not const),
            // allowing modification of the string if needed
			return (char*)s; 
        }
        s++;
    }

    if ((char)c == '\0') {
        return (char*)s;
    }

    return NULL;
}