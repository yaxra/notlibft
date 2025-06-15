#include "../includes/libft.h"
#include <stdio.h>             

int main(void)
{
	// ft_isalpha
	color_string("Testing ft_isalpha function:");
	test_result(ft_isalpha('A') == 1, "ft_isalpha('A') ", ft_isalpha('A'), '1');
	test_result(ft_isalpha('Z') == 1, "ft_isalpha('Z') ", ft_isalpha('Z'), '1');
	test_result(ft_isalpha('a') == 1, "ft_isalpha('a') ", ft_isalpha('a'), '1');
	test_result(ft_isalpha('z') == 1, "ft_isalpha('z') ", ft_isalpha('z'), '1');
	test_result(ft_isalpha('4') == 0, "ft_isalpha('4') ", ft_isalpha('4'), '0');
	test_result(ft_isalpha('@') == 0, "ft_isalpha('@') ", ft_isalpha('@'), '0');
	test_result(ft_isalpha(65) == 1, "ft_isalpha(65)  ", ft_isalpha(65), '1');  // 'A'
	test_result(ft_isalpha(99) == 1, "ft_isalpha(99)  ", ft_isalpha(99), '1');  // 'c'
	test_result(ft_isalpha(0) == 0, "ft_isalpha(0)   ", ft_isalpha(0), '0');
	test_result(ft_isalpha(300) == 0, "ft_isalpha(300) ", ft_isalpha(300), '0');
	test_result(ft_isalpha(-10) == 0, "ft_isalpha(-10) ", ft_isalpha(-10), '0');
	color_string("ft_isalpha tests completed.");
	printf("\n");
	// ft_isdigit
	color_string("Testing ft_isdigit function:");
	test_result(ft_isdigit('0') == 1, "ft_isdigit('0')  ", ft_isdigit('0'), '1');
	test_result(ft_isdigit('1') == 1, "ft_isdigit('1')  ", ft_isdigit('1'), '1');
	test_result(ft_isdigit('2') == 1, "ft_isdigit('2')  ", ft_isdigit('2'), '1');
	test_result(ft_isdigit('3') == 1, "ft_isdigit('3')  ", ft_isdigit('3'), '1');
	test_result(ft_isdigit('4') == 1, "ft_isdigit('4')  ", ft_isdigit('4'), '1');
	test_result(ft_isdigit('5') == 1, "ft_isdigit('5')  ", ft_isdigit('5'), '1');
	test_result(ft_isdigit('6') == 1, "ft_isdigit('6')  ", ft_isdigit('6'), '1');
	test_result(ft_isdigit('7') == 1, "ft_isdigit('7')  ", ft_isdigit('7'), '1');
	test_result(ft_isdigit('8') == 1, "ft_isdigit('8')  ", ft_isdigit('8'), '1');
	test_result(ft_isdigit('9') == 1, "ft_isdigit('9')  ", ft_isdigit('9'), '1');
	test_result(ft_isdigit('10') == 0, "ft_isdigit('10') ", ft_isdigit('10'), '0');
	test_result(ft_isdigit(1) == 0, "ft_isdigit(1)    ", ft_isdigit(1), '0');
	test_result(ft_isdigit("A") == 0, "ft_isdigit('A')  ", ft_isdigit("A"), '0');
	color_string("ft_isdigit tests completed.");
	printf("\n");
	// ft_isalnum
	color_string("Testing ft_isalnum function:");
	test_result(ft_isalnum('A') == 1, "ft_isalnum('A')  ", ft_isalnum('A'), '1');
	test_result(ft_isalnum('Z') == 1, "ft_isalnum('Z')  ", ft_isalnum('Z'), '1');
	test_result(ft_isalnum('a') == 1, "ft_isalnum('a')  ", ft_isalnum('a'), '1');
	test_result(ft_isalnum('z') == 1, "ft_isalnum('z')  ", ft_isalnum('z'), '1');
	test_result(ft_isalnum('0') == 1, "ft_isalnum('0')  ", ft_isalnum('0'), '1');
	test_result(ft_isalnum('9') == 1, "ft_isalnum('9')  ", ft_isalnum('9'), '1');
	test_result(ft_isalnum('@') == 0, "ft_isalnum('@')  ", ft_isalnum('@'), '0');
	test_result(ft_isalnum(65) == 1, "ft_isalnum(65)   ", ft_isalnum(65), '1');  // 'A'
	test_result(ft_isalnum(99) == 1, "ft_isalnum(99)   ", ft_isalnum(99), '1');  // 'c'
	test_result(ft_isalnum(0) == 0, "ft_isalnum(0)    ", ft_isalnum(0), '0');
	test_result(ft_isalnum(300) == 0, "ft_isalnum(300)  ", ft_isalnum(300), '0');
	test_result(ft_isalnum('30') == 0, "ft_isalnum('30') ", ft_isalnum('30'), '0');
	test_result(ft_isalnum(-10) == 0, "ft_isalnum(-10)  ", ft_isalnum(-10), '0');
	test_result(ft_isalnum('!') == 0, "ft_isalnum('!')  ", ft_isalnum('!'), '0');
	test_result(ft_isalnum(' ') == 0, "ft_isalnum(' ')  ", ft_isalnum(' '), '0');
	color_string("ft_isalnum tests completed.");
	printf("\n");
	// ft_isascii
	color_string("Testing ft_isascii function:");
	test_result(ft_isascii('A') == 1, "ft_isascii('A') ", ft_isascii('A'), '1');
	test_result(ft_isascii('Z') == 1, "ft_isascii('Z') ", ft_isascii('Z'), '1');
	test_result(ft_isascii('a') == 1, "ft_isascii('a') ", ft_isascii('a'), '1');
	test_result(ft_isascii('z') == 1, "ft_isascii('z') ", ft_isascii('z'), '1');
	test_result(ft_isascii('0') == 1, "ft_isascii('0') ", ft_isascii('0'), '1');
	test_result(ft_isascii('9') == 1, "ft_isascii('9') ", ft_isascii('9'), '1');
	test_result(ft_isascii('@') == 1, "ft_isascii('@') ", ft_isascii('@'), '1');
	test_result(ft_isascii(65) == 1, "ft_isascii(65)  ", ft_isascii(65), '1');  // 'A'
	test_result(ft_isascii(99) == 1, "ft_isascii(99)  ", ft_isascii(99), '1');  // 'c'
	test_result(ft_isascii(0) == 1, "ft_isascii(0)   ", ft_isascii(0), '1');
	test_result(ft_isascii(127) == 1, "ft_isascii(127) ", ft_isascii(127), '1');
	test_result(ft_isascii(128) == 0, "ft_isascii(128) ", ft_isascii(128), '0');
	test_result(ft_isascii(300) == 0, "ft_isascii(300) ", ft_isascii(300), '0');
	test_result(ft_isascii(-10) == 0, "ft_isascii(-10) ", ft_isascii(-10), '0');
	color_string("ft_isalnum tests completed.");
	printf("\n");
	// ft_isprint
	color_string("Testing ft_isprint function:");
	test_result(ft_isprint('A') == 1, "ft_isprint('A')  ", ft_isprint('A'), '1');
	test_result(ft_isprint('Z') == 1, "ft_isprint('Z')  ", ft_isprint('Z'), '1');
	test_result(ft_isprint('a') == 1, "ft_isprint('a')  ", ft_isprint('a'), '1');
	test_result(ft_isprint('z') == 1, "ft_isprint('z')  ", ft_isprint('z'), '1');
	test_result(ft_isprint('0') == 1, "ft_isprint('0')  ", ft_isprint('0'), '1');
	test_result(ft_isprint('9') == 1, "ft_isprint('9')  ", ft_isprint('9'), '1');
	test_result(ft_isprint('@') == 1, "ft_isprint('@')  ", ft_isprint('@'), '1');
	test_result(ft_isprint(65) == 1, "ft_isprint(65)   ", ft_isprint(65), '1');  // 'A'
	test_result(ft_isprint(99) == 1, "ft_isprint(99)   ", ft_isprint(99), '1');  // 'c'
	test_result(ft_isprint(0) == 0, "ft_isprint(0)    ", ft_isprint(0), '0');
	test_result(ft_isprint(127) == 0, "ft_isprint(127)  ", ft_isprint(127), '0');
	test_result(ft_isprint(128) == 0, "ft_isprint(128)  ", ft_isprint(128), '0');
	test_result(ft_isprint(300) == 0, "ft_isprint(300)  ", ft_isprint(300), '0');
	test_result(ft_isprint(-10) == 0, "ft_isprint(-10)  ", ft_isprint(-10), '0');
	test_result(ft_isprint(' ') == 1, "ft_isprint(' ')  ", ft_isprint(' '), '1');
	test_result(ft_isprint('\n') == 0, "ft_isprint('\\n') ", ft_isprint('\n'), '0');
	color_string("ft_isprint tests completed.");
	printf("\n");
	// ft_toupper and ft_tolower
	color_string("ft_toupper function tests:");
	test_result(ft_toupper('a') == 'A', "ft_toupper('a')  ", ft_toupper('a'), 'A'); // 'a' to 'A'
	test_result(ft_toupper('z') == 'Z', "ft_toupper('z')  ", ft_toupper('z'), 'Z'); // 'z' to 'Z'
	test_result(ft_toupper('A') == 'A', "ft_toupper('A')  ", ft_toupper('A'), 'A');
	test_result(ft_toupper('Z') == 'Z', "ft_toupper('Z')  ", ft_toupper('Z'), 'Z');
	test_result(ft_toupper('0') == '0', "ft_toupper('0')  ", ft_toupper('0'), '0');
	test_result(ft_toupper('1') == '1', "ft_toupper('1')  ", ft_toupper('1'), '1');
	test_result(ft_toupper('@') == '@', "ft_toupper('@')  ", ft_toupper('@'), '@');
	test_result(ft_toupper(65) == 65, "ft_toupper(65)   ", ft_toupper(65), '65');    // 'A'
	test_result(ft_toupper(99) == 67, "ft_toupper(99)   ", ft_toupper(99), '67');    // 'c' to 'C'
	test_result(ft_toupper(0) == 0, "ft_toupper(0)    ", ft_toupper(0), '0');
	test_result(ft_toupper(300) == 300, "ft_toupper(300)  ", ft_toupper(300), '300');
	test_result(ft_toupper(-10) == -10, "ft_toupper(-10)  ", ft_toupper(-10), '- 10');
	test_result(ft_toupper(' ') == ' ', "ft_toupper(' ')  ", ft_toupper(' '), ' ');
	test_result(ft_toupper('\n') == '\n', "ft_toupper('\\n') ", ft_toupper('\n'), '\n');
	color_string("ft_toupper tests completed.");
	printf("\n");
	color_string("ft_tolower function tests:");
	test_result(ft_tolower('A') == 'a', "ft_tolower('A')  ", ft_tolower('A'), 'a'); // 'A' to 'a'
	test_result(ft_tolower('Z') == 'z', "ft_tolower('Z')  ", ft_tolower('Z'), 'z'); // 'Z' to 'z'
	test_result(ft_tolower('a') == 'a', "ft_tolower('a')  ", ft_tolower('a'), 'a');
	test_result(ft_tolower('z') == 'z', "ft_tolower('z')  ", ft_tolower('z'), 'z');
	test_result(ft_tolower('0') == '0', "ft_tolower('0')  ", ft_tolower('0'), '0');
	test_result(ft_tolower('1') == '1', "ft_tolower('1')  ", ft_tolower('1'), '1');
	test_result(ft_tolower('@') == '@', "ft_tolower('@')  ", ft_tolower('@'), '@');
	test_result(ft_tolower(65) == 97, "ft_tolower(65)   ", ft_tolower(65), '97');    // 'A' to 'a'
	test_result(ft_tolower(67) == 99, "ft_tolower(67)   ", ft_tolower(67), '99');    // 'C' to 'c'
	test_result(ft_tolower(0) == 0, "ft_tolower(0)    ", ft_tolower(0), 0);
	test_result(ft_tolower(300) == 300, "ft_tolower(300)  ", ft_tolower(300), '300');
	test_result(ft_tolower(-10) == -10, "ft_tolower(-10)  ", ft_tolower(-10), '-10');
	test_result(ft_tolower(' ') == ' ', "ft_tolower(' ')  ", ft_tolower(' '), ' ');
	test_result(ft_tolower('\n') == '\n', "ft_tolower('\\n') ", ft_tolower('\n'), '\n');
	color_string("ft_tolower tests completed.");
	printf("\n");
	// ft_strlen
	color_string("Testing ft_strlen function:");
	test_result(ft_strlen("Hello") == 5, "ft_strlen(\"Hello\")                       ", ft_strlen("Hello"), '5');
	test_result(ft_strlen("World") == 5, "ft_strlen(\"World\")                       ", ft_strlen("World"), '5');
	test_result(ft_strlen("") == 0, "ft_strlen(\"\")                            ", ft_strlen(""), '0');
	test_result(ft_strlen("12345") == 5, "ft_strlen(\"12345\")                       ", ft_strlen("12345"), '5');
	test_result(ft_strlen("!@#$%") == 5, "ft_strlen(\"!@#$%\")                       ", ft_strlen("!@#$%"), '5');
	test_result(ft_strlen(" ") == 1, "ft_strlen(\" \")                           ", ft_strlen(" "), '1');
	test_result(ft_strlen("Hello, World!") == 13, "ft_strlen(\"Hello, World!\")               ", ft_strlen("Hello, World!"), '13');
	test_result(ft_strlen("1234567890") == 10, "ft_strlen(\"1234567890\")                  ", ft_strlen("1234567890"), '10');
	test_result(ft_strlen("A") == 1, "ft_strlen(\"A\")                           ", ft_strlen("A"), '1');
	test_result(ft_strlen("Z") == 1, "ft_strlen(\"Z\")                           ", ft_strlen("Z"), '1');
	test_result(ft_strlen("abcdefghijklmnopqrstuvwxyz") == 26, "ft_strlen(\"abcdefghijklmnopqrstuvwxyz\")  ", ft_strlen("abcdefghijklmnopqrstuvwxyz"), '26');
	color_string("ft_strlen tests completed.");
	printf("\n");
	// ft_strchr
	color_string("Testing ft_strchr function:");
	char *str = "Hello World!";
	test_result(ft_strchr(str, 'H') == str, "ft_strchr(\"Hello World!\", 'H')  ", ft_strchr(str, 'H'), str);
	test_result(ft_strchr(str, 'e') == str + 1, "ft_strchr(\"Hello World!\", 'e')  ", ft_strchr(str, 'e'), str + 1);
	test_result(ft_strchr(str, 'l') == str + 2, "ft_strchr(\"Hello World!\", 'l')  ", ft_strchr(str, 'l'), str + 2);
	test_result(ft_strchr(str, 'o') == str + 4, "ft_strchr(\"Hello World!\", 'o')  ", ft_strchr(str, 'o'), str + 4);
	test_result(ft_strchr(str, 'W') == str + 6, "ft_strchr(\"Hello World!\", 'W')  ", ft_strchr(str, 'W'), str + 6);
	test_result(ft_strchr(str, 'r') == str + 8, "ft_strchr(\"Hello World!\", 'r')  ", ft_strchr(str, 'r'), str + 8);
	test_result(ft_strchr(str, ' ') == str + 5, "ft_strchr(\"Hello World!\", ' ')  ", ft_strchr(str, ' '), str + 5);
	test_result(ft_strchr(str, 'd') == str + 10, "ft_strchr(\"Hello World!\", 'd')  ", ft_strchr(str, 'd'), str + 10);
	test_result(ft_strchr(str, '!') == str + 11, "ft_strchr(\"Hello World!\", '!')  ", ft_strchr(str, '!'), str + 11);
	test_result(ft_strchr(str, 'x') == NULL, "ft_strchr(\"Hello World!\", 'x')  ", ft_strchr(str, 'x'), 'NULL');
	test_result(ft_strchr(str, '\0') == str + 12, "ft_strchr(\"Hello World!\", '\\0') ", ft_strchr(str, '\0'), str + 12);
	test_result(ft_strchr(str, 'h') == NULL, "ft_strchr(\"Hello World!\", 'h')  ", ft_strchr(str, 'h'), 'NULL');
	color_string("ft_strchr tests completed.");
	printf("\n");
	// ft_strrchr
	color_string("Testing ft_strrchr function:");
	test_result(ft_strrchr(str, 'H') == str, "ft_strrchr(\"Hello World!\", 'H') ", ft_strrchr(str, 'H'), str);
	test_result(ft_strrchr(str, 'e') == str + 1, "ft_strrchr(\"Hello World!\", 'e') ", ft_strrchr(str, 'e'), str + 1);
	test_result(ft_strrchr(str, 'l') == str + 9, "ft_strrchr(\"Hello World!\", 'l') ", ft_strrchr(str, 'l'), str + 9);
	test_result(ft_strrchr(str, 'o') == str + 7, "ft_strrchr(\"Hello World!\", 'o') ", ft_strrchr(str, 'o'), str + 7);
	test_result(ft_strrchr(str, 'W') == str + 6, "ft_strrchr(\"Hello World!\", 'W') ", ft_strrchr(str, 'W'), str + 6);
	test_result(ft_strrchr(str, 'r') == str + 8, "ft_strrchr(\"Hello World!\", 'r') ", ft_strrchr(str, 'r'), str + 8);
	test_result(ft_strrchr(str, ' ') == str + 5, "ft_strrchr(\"Hello World!\", ' ') ", ft_strrchr(str, ' '), str + 5);
	test_result(ft_strrchr(str, 'd') == str + 10, "ft_strrchr(\"Hello World!\", 'd') ", ft_strrchr(str, 'd'), str + 10);
	test_result(ft_strrchr(str, '!') == str + 11, "ft_strrchr(\"Hello World!\", '!') ", ft_strrchr(str, '!'), str + 11);
	test_result(ft_strrchr(str, 'x') == NULL, "ft_strrchr(\"Hello World!\", 'x') ", ft_strrchr(str, 'x'), 'NULL');
	test_result(ft_strrchr(str, '\0') == str + 12, "ft_strrchr(\"Hello World!\", '\\0')", ft_strrchr(str, '\0'), str + 12);
	test_result(ft_strrchr(str, 'h') == NULL, "ft_strrchr(\"Hello World!\", 'h') ", ft_strrchr(str, 'h'), 'NULL');
	test_result(ft_strrchr(str, '1') == NULL, "ft_strrchr(\"Hello World!\", '1') ", ft_strrchr(str, '1'), 'NULL');
	color_string("ft_strrchr tests completed.");
	printf("\n");
	// ft_strncmp
	color_string("Testing ft_strncmp function:");
	test_result(ft_strncmp("Hello", "Hello", 5) == 0, "ft_strncmp(\"Hello\", \"Hello\", 5)       ", ft_strncmp("Hello", "Hello", 5), '0');
	test_result(ft_strncmp("Hello", "World", 5) == -15, "ft_strncmp(\"Hello\", \"World\", 5)       ", ft_strncmp("Hello", "World", 5), '-15');
	test_result(ft_strncmp("World", "Hello", 5) == 15, "ft_strncmp(\"World\", \"Hello\", 5)       ", ft_strncmp("World", "Hello", 5), '15');
	test_result(ft_strncmp("Hello", "Hello!", 5) == 0, "ft_strncmp(\"Hello\", \"Hello!\", 5)      ", ft_strncmp("Hello", "Hello!", 5), '0');
	test_result(ft_strncmp("Hello", "Hello", 3) == 0, "ft_strncmp(\"Hello\", \"Hello\", 3)       ", ft_strncmp("Hello", "Hello", 3), '0');
	test_result(ft_strncmp("Hello", "Hello", 0) == 0, "ft_strncmp(\"Hello\", \"Hello\", 0)       ", ft_strncmp("Hello", "Hello", 0), '0');
	test_result(ft_strncmp("Hello", "Hello", 10) == 0, "ft_strncmp(\"Hello\", \"Hello\", 10)      ", ft_strncmp("Hello", "Hello", 10), '0');
	test_result(ft_strncmp("Hello", "Hello World", 5) == 0, "ft_strncmp(\"Hello\", \"Hello World\", 5) ", ft_strncmp("Hello", "Hello World", 5), '0');
	test_result(ft_strncmp("ab\0c", "ab\0d", 4) == 0, "ft_strncmp(\"ab\\0c\", \"ab\\0d\", 4)       ", ft_strncmp("ab\0c", "ab\0d", 4), '0');
	test_result(ft_strncmp("Hello", "HelLo", 5) == 32, "ft_strncmp(\"Hello\", \"HelLo\", 5)       ", ft_strncmp("Hello", "HelLo", 5), '32');
	color_string("ft_strncmp tests completed.");
	printf("\n");
	// ft_strnstr
	color_string("Testing ft_strnstr function:");
	test_result(ft_strnstr(str, "World", 11) == str + 6, "ft_strnstr(\"Hello World\", \"World\", 11)       ", ft_strnstr(str, "World", 11), str + 6);
	test_result(ft_strnstr(str, "Hello", 11) == str, "ft_strnstr(\"Hello World\", \"Hello\", 11)       ", ft_strnstr(str, "Hello", 11), str);
	test_result(ft_strnstr(str, "!", 11) ==  NULL, "ft_strnstr(\"Hello World\", \"!\", 11)           ", ft_strnstr(str, "!", 11), NULL);
	test_result(ft_strnstr(str, "Hello World", 11) == str, "ft_strnstr(\"Hello World\", \"Hello World\", 11) ", ft_strnstr(str, "Hello World", 11), str);
	test_result(ft_strnstr(str, "Hello", 5) == str, "ft_strnstr(\"Hello World\", \"Hello\", 5)        ", ft_strnstr(str, "Hello", 5), str);
	color_string("ft_strnstr tests completed.");
	printf("\n");
	// ft_strlcpy
	color_string("Testing ft_strlcpy function:");
	char buffer[10];
	test_result(ft_strlcpy(buffer, "Hello", 5) == 5, "ft_strlcpy(buffer, \"Hello\", 5)        ", ft_strlcpy(buffer, "Hello", 5), '5');
	test_result(ft_strlcpy(buffer, "World", 10) == 5, "ft_strlcpy(buffer, \"World\", 10)       ", ft_strlcpy(buffer, "World", 10), '5');
	test_result(ft_strlcpy(buffer, "Hello World", 10) == 11, "ft_strlcpy(buffer, \"Hello World\", 10) ", ft_strlcpy(buffer, "Hello World", 10), '11');
	test_result(ft_strlcpy(buffer, "Hello", 0) == 5, "ft_strlcpy(buffer, \"Hello\", 0)        ", ft_strlcpy(buffer, "Hello", 0), '5');
	test_result(ft_strlcpy(buffer, "Hello", 1) == 5, "ft_strlcpy(buffer, \"Hello\", 1)        ", ft_strlcpy(buffer, "Hello", 1), '5');
	color_string("ft_strlcpy tests completed.");
	printf("\n");
	// ft_strlcat
	color_string("Testing ft_strlcat function:");
	char dest[20] = "Hello";
	test_result(ft_strlcat(dest, " World", 20) == 11, "ft_strlcat(dest, \" World\", 20) ", ft_strlcat(dest, " World", 20), '11');
	char dest2[20] = "Hello World";
	test_result(ft_strlcat(dest2, "!", 20) == 12, "ft_strlcat(dest2, \"!\", 20)     ", ft_strlcat(dest2, "!", 20), '12');
	char dest3[20] = "Hello World!";
	test_result(ft_strlcat(dest3, "Hello", 20) == 17, "ft_strlcat(dest3, \"Hello\", 20) ", ft_strlcat(dest3, "Hello", 20), '17');
	char dest4[20] = "Hello World!";
	test_result(ft_strlcat(dest4, "Hello", 5) == 10, "ft_strlcat(dest4, \"Hello\", 5)  ", ft_strlcat(dest4, "Hello", 5), '10');
	char dest5[20] = "Hello World!";
	test_result(ft_strlcat(dest5, "Hello", 0) == 5, "ft_strlcat(dest5, \"Hello\", 0)  ", ft_strlcat(dest5, "Hello", 0), '5');
	char dest6[20] = "Hello World!";
	test_result(ft_strlcat(dest6, "Hello", 1) == 6, "ft_strlcat(dest6, \"Hello\", 1)  ", ft_strlcat(dest6, "Hello", 1), '6');
	color_string("ft_strlcat tests completed.");
	printf("\n");
	// All Basic Character / String Functions tests completed

	return (0);
}
