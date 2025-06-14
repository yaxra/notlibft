#include "../includes/libft.h"
#include <stdio.h>

#define GREEN   "\033[0;32m"
#define RED     "\033[0;31m"
#define RESET   "\033[0m"

void test_result(int condition, const char* message, int result) {
	if (condition) {
		printf(GREEN "[+] " RESET "%s: %d\n", message, result);
	}
	else {
		printf(RED "[-] " RESET "%s: %d (Expected: %d)\n\n", message, result, !result);
	}
}