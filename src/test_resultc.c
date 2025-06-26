#include "../includes/libft.h"
#include <stdio.h>

#define GREEN   "\033[0;32m"
#define RED     "\033[0;31m"
#define RESET   "\033[0m"

void test_resultc(int condition, const char* message, const char* result, const char* expected) {
    if (condition) {
        if (result != NULL) {
            printf(GREEN "[+] " RESET "%s: %d (Expected: %s)\n", message, *result, expected);
        } else {
            printf(GREEN "[+] " RESET "%s: NULL (Expected: %s)\n", message, expected);
        }
	} else {
	    if (result != NULL) {
			printf(RED "[-] " RESET "%s: %d (Expected: %s)\n", message, *result, expected);
        } else {
            printf(RED "[-] " RESET "%s: NULL (Expected: %s)\n", message, expected);
        }
	}   
}