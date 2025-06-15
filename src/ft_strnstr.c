#include "../includes/libft.h"

/*
* Huf, this one was a bit tricky :)
* This function searches for the first occurrence of the substring `subs` in the string `s`,
* returning a pointer to the beginning of the substring if found, or NULL if not found.
* In Portuguese I could say that the first version of it was a "gambiarra", hehe, it was way bigger.
*/

char* ft_strnstr(const char* s, const char* subs, size_t len)
{
    size_t i;
    size_t j;

	if (*subs == '\0') { // If the substring is empty, return the original string
        return (char*)s;
    }
    i = 0;
	while (s[i] && i < len) { // while the current is not null and we are within the length limit
        j = 0;
		// while the current character of the substring is not null and the characters match
        while (subs[j] && (i + j) < len && s[i + j] == subs[j]) 
            j++;
		if (subs[j] == '\0') { // if we reached the end of the substring, it means we found a match
			return (char*)&s[i]; // return the pointer to the start of the match
        }
        i++;
    }
    return NULL;
}