#include "../includes/libft.h"
#include <stdio.h>

#define PURPLE_BRIGHT "\033[1;35m"  
#define RESET   "\033[0m"

void color_string(const char* message) {
	printf(PURPLE_BRIGHT "[*] %s\n" RESET, message );
}