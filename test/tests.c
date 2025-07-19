#include "../includes/libft.h"
#include <stdio.h>

int main(void)
{
	// ft_isalpha
	color_string("Testing ft_isalpha function:");
	int ft_isalpha1 = ft_isalpha('A');
	int ft_isalpha2 = ft_isalpha('Z');
	int ft_isalpha3 = ft_isalpha('a');
	int ft_isalpha4 = ft_isalpha('z');
	int ft_isalpha5 = ft_isalpha('4');
	int ft_isalpha6 = ft_isalpha('@');
	int ft_isalpha7 = ft_isalpha(65); // 'A'
	int ft_isalpha8 = ft_isalpha(99); // 'c'
	int ft_isalpha9 = ft_isalpha(0);
	int ft_isalpha10 = ft_isalpha(300);
	int ft_isalpha11 = ft_isalpha(-10);

	test_result(ft_isalpha1 == 1, "ft_isalpha('A') ", ft_isalpha1, 1);
	test_result(ft_isalpha2 == 1, "ft_isalpha('Z') ", ft_isalpha2, 1);
	test_result(ft_isalpha3 == 1, "ft_isalpha('a') ", ft_isalpha3, 1);
	test_result(ft_isalpha4 == 1, "ft_isalpha('z') ", ft_isalpha4, 1);
	test_result(ft_isalpha5 == 0, "ft_isalpha('4') ", ft_isalpha5, 0);
	test_result(ft_isalpha6 == 0, "ft_isalpha('@') ", ft_isalpha6, 0);
	test_result(ft_isalpha7 == 1, "ft_isalpha(65)  ", ft_isalpha7, 1);  // 'A'
	test_result(ft_isalpha8 == 1, "ft_isalpha(99)  ", ft_isalpha8, 1);  // 'c'
	test_result(ft_isalpha9 == 0, "ft_isalpha(0)   ", ft_isalpha9, 0);
	test_result(ft_isalpha10 == 0, "ft_isalpha(300) ", ft_isalpha10, 0);
	test_result(ft_isalpha11 == 0, "ft_isalpha(-10) ", ft_isalpha11, 0);
	color_string("ft_isalpha tests completed.");
	printf("\n");

	// ft_isdigit
	color_string("Testing ft_isdigit function:");
	int ft_isdigit1 = ft_isdigit('0');
	int ft_isdigit2 = ft_isdigit('1');
	int ft_isdigit3 = ft_isdigit('2');
	int ft_isdigit4 = ft_isdigit('3');
	int ft_isdigit5 = ft_isdigit('4');
	int ft_isdigit6 = ft_isdigit('5');
	int ft_isdigit7 = ft_isdigit('6');
	int ft_isdigit8 = ft_isdigit('7');
	int ft_isdigit9 = ft_isdigit('8');
	int ft_isdigit10 = ft_isdigit('9');
	int ft_isdigit11 = ft_isdigit(1);

	test_result(ft_isdigit1  == 1, "ft_isdigit('0')  ", ft_isdigit1 , 1);
	test_result(ft_isdigit2  == 1, "ft_isdigit('1')  ", ft_isdigit2 , 1);
	test_result(ft_isdigit3  == 1, "ft_isdigit('2')  ", ft_isdigit3 , 1);
	test_result(ft_isdigit4  == 1, "ft_isdigit('3')  ", ft_isdigit4 , 1);
	test_result(ft_isdigit5  == 1, "ft_isdigit('4')  ", ft_isdigit5 , 1);
	test_result(ft_isdigit6  == 1, "ft_isdigit('5')  ", ft_isdigit6 , 1);
	test_result(ft_isdigit7  == 1, "ft_isdigit('6')  ", ft_isdigit7 , 1);
	test_result(ft_isdigit8  == 1, "ft_isdigit('7')  ", ft_isdigit8 , 1);
	test_result(ft_isdigit9  == 1, "ft_isdigit('8')  ", ft_isdigit9 , 1);
	test_result(ft_isdigit10  == 1, "ft_isdigit('9')  ", ft_isdigit10 , 1);
	test_result(ft_isdigit11  == 0, "ft_isdigit(1)    ", ft_isdigit10 , 0);
	color_string("ft_isdigit tests completed.");
	printf("\n");

	// ft_isalnum
	color_string("Testing ft_isalnum function:");
	int ft_isalnum1 = ft_isalnum('A');
	int ft_isalnum2 = ft_isalnum('Z');
	int ft_isalnum3 = ft_isalnum('a');
	int ft_isalnum4 = ft_isalnum('z');
	int ft_isalnum5 = ft_isalnum('0');
	int ft_isalnum6 = ft_isalnum('9');
	int ft_isalnum7 = ft_isalnum('@');
	int ft_isalnum8 = ft_isalnum(65);  // 'A'
	int ft_isalnum9 = ft_isalnum(99);  // 'c'
	int ft_isalnum10 = ft_isalnum(0);
	int ft_isalnum11 = ft_isalnum(300);
	int ft_isalnum12 = ft_isalnum(-10);
	int ft_isalnum13 = ft_isalnum('!');
	int ft_isalnum14 = ft_isalnum(' ');

	test_result(ft_isalnum1 == 1, "ft_isalnum('A')  ", ft_isalnum1, 1);
	test_result(ft_isalnum2 == 1, "ft_isalnum('Z')  ", ft_isalnum2, 1);
	test_result(ft_isalnum3 == 1, "ft_isalnum('a')  ", ft_isalnum3, 1);
	test_result(ft_isalnum4 == 1, "ft_isalnum('z')  ", ft_isalnum4, 1);
	test_result(ft_isalnum5 == 1, "ft_isalnum('0')  ", ft_isalnum5, 1);
	test_result(ft_isalnum6 == 1, "ft_isalnum('9')  ", ft_isalnum6, 1);
	test_result(ft_isalnum7 == 0, "ft_isalnum('@')  ", ft_isalnum7, 0);
	test_result(ft_isalnum8 == 1, "ft_isalnum(65)   ", ft_isalnum8, 1);  // 'A'
	test_result(ft_isalnum9 == 1, "ft_isalnum(99)   ", ft_isalnum9, 1);  // 'c'
	test_result(ft_isalnum10 == 0, "ft_isalnum(0)    ", ft_isalnum10, 0);
	test_result(ft_isalnum11 == 0, "ft_isalnum(300)  ", ft_isalnum11, 0);
	test_result(ft_isalnum12 == 0, "ft_isalnum(-10)  ", ft_isalnum12, 0);
	test_result(ft_isalnum13 == 0, "ft_isalnum('!')  ", ft_isalnum13, 0);
	test_result(ft_isalnum14 == 0, "ft_isalnum(' ')  ", ft_isalnum14, 0);
	color_string("ft_isalnum tests completed.");
	printf("\n");

	// ft_isascii
	color_string("Testing ft_isascii function:");
	int ft_isascii1 = ft_isascii('A');
	int ft_isascii2 = ft_isascii('Z');
	int ft_isascii3 = ft_isascii('a');
	int ft_isascii4 = ft_isascii('z');
	int ft_isascii5 = ft_isascii('0');
	int ft_isascii6 = ft_isascii('9');
	int ft_isascii7 = ft_isascii('@');
	int ft_isascii8 = ft_isascii(65);  // 'A'
	int ft_isascii9 = ft_isascii(99);  // 'c'
	int ft_isascii10 = ft_isascii(0);
	int ft_isascii11 = ft_isascii(127);
	int ft_isascii12 = ft_isascii(128);
	int ft_isascii13 = ft_isascii(300);
	int ft_isascii14 = ft_isascii(-10);

	test_result(ft_isascii1 == 1, "ft_isascii('A')  ", ft_isascii1, 1);
	test_result(ft_isascii2 == 1, "ft_isascii('Z')  ", ft_isascii2, 1);
	test_result(ft_isascii3 == 1, "ft_isascii('a')  ", ft_isascii3, 1);
	test_result(ft_isascii4 == 1, "ft_isascii('z')  ", ft_isascii4, 1);
	test_result(ft_isascii5 == 1, "ft_isascii('0')  ", ft_isascii5, 1);
	test_result(ft_isascii6 == 1, "ft_isascii('9')  ", ft_isascii6, 1);
	test_result(ft_isascii7 == 1, "ft_isascii('@')  ", ft_isascii7, 1);
	test_result(ft_isascii8 == 1, "ft_isascii(65)   ", ft_isascii8, 1);  // 'A'
	test_result(ft_isascii9 == 1, "ft_isascii(99)   ", ft_isascii9, 1);  // 'c'
	test_result(ft_isascii10 == 1, "ft_isascii(0)    ", ft_isascii10, 1);
	test_result(ft_isascii11 == 1, "ft_isascii(127)  ", ft_isascii11, 1);
	test_result(ft_isascii12 == 0, "ft_isascii(128)  ", ft_isascii12, 0);
	test_result(ft_isascii13 == 0, "ft_isascii(300)  ", ft_isascii13, 0);
	test_result(ft_isascii14 == 0, "ft_isascii(-10)  ", ft_isascii14, 0);
	color_string("ft_isalnum tests completed.");
	printf("\n");

	// ft_isprint
	color_string("Testing ft_isprint function:");
	int ft_isprint1 = ft_isprint('A');
	int ft_isprint2 = ft_isprint('Z');
	int ft_isprint3 = ft_isprint('a');
	int ft_isprint4 = ft_isprint('z');
	int ft_isprint5 = ft_isprint('0');
	int ft_isprint6 = ft_isprint('9');
	int ft_isprint7 = ft_isprint('@');
	int ft_isprint8 = ft_isprint(65);  // 'A'
	int ft_isprint9 = ft_isprint(99);  // 'c'
	int ft_isprint10 = ft_isprint(0);
	int ft_isprint11 = ft_isprint(127);
	int ft_isprint12 = ft_isprint(128);
	int ft_isprint13 = ft_isprint(300);
	int ft_isprint14 = ft_isprint(-10);
	int ft_isprint15 = ft_isprint(' ');
	int ft_isprint16 = ft_isprint('\n'); // newline

	test_result(ft_isprint1 == 1, "ft_isprint('A')  ", ft_isprint1, 1);
	test_result(ft_isprint2 == 1, "ft_isprint('Z')  ", ft_isprint2, 1);
	test_result(ft_isprint3 == 1, "ft_isprint('a')  ", ft_isprint3, 1);
	test_result(ft_isprint4 == 1, "ft_isprint('z')  ", ft_isprint4, 1);
	test_result(ft_isprint5 == 1, "ft_isprint('0')  ", ft_isprint5, 1);
	test_result(ft_isprint6 == 1, "ft_isprint('9')  ", ft_isprint6, 1);
	test_result(ft_isprint7 == 1, "ft_isprint('@')  ", ft_isprint7, 1);
	test_result(ft_isprint8 == 1, "ft_isprint(65)   ", ft_isprint8, 1);  // 'A'
	test_result(ft_isprint9 == 1, "ft_isprint(99)   ", ft_isprint9, 1);  // 'c'
	test_result(ft_isprint10 == 0, "ft_isprint(0)    ", ft_isprint10, 0);
	test_result(ft_isprint11 == 0, "ft_isprint(127)  ", ft_isprint11, 0);
	test_result(ft_isprint12 == 0, "ft_isprint(128)  ", ft_isprint12, 0);
	test_result(ft_isprint13 == 0, "ft_isprint(300)  ", ft_isprint13, 0);
	test_result(ft_isprint14 == 0, "ft_isprint(-10)  ", ft_isprint14, 0);
	test_result(ft_isprint15 == 1, "ft_isprint(' ')  ", ft_isprint15, 1);
	test_result(ft_isprint16 == 0, "ft_isprint('\\n') ", ft_isprint16, 0);
	color_string("ft_isprint tests completed.");
	printf("\n");

	// ft_toupper
	color_string("ft_toupper function tests:");
	int ft_toupper1 = ft_toupper('a');
	int ft_toupper2 = ft_toupper('z');
	int ft_toupper3 = ft_toupper('A');
	int ft_toupper4 = ft_toupper('Z');
	int ft_toupper5 = ft_toupper('0');
	int ft_toupper6 = ft_toupper('1');
	int ft_toupper7 = ft_toupper('@');
	int ft_toupper8 = ft_toupper(65);  // 'A'
	int ft_toupper9 = ft_toupper(99);  // 'c'
	int ft_toupper10 = ft_toupper(0);
	int ft_toupper11 = ft_toupper(300);
	int ft_toupper12 = ft_toupper(-10);
	int ft_toupper13 = ft_toupper(' ');
	int ft_toupper14 = ft_toupper('\n'); // newline

	test_result(ft_toupper1 == 'A', "ft_toupper('a')  ", ft_toupper1, 65); // 'a' to 'A'
	test_result(ft_toupper2 == 'Z', "ft_toupper('z')  ", ft_toupper2, 90); // 'z' to 'Z'
	test_result(ft_toupper3 == 'A', "ft_toupper('A')  ", ft_toupper3, 65);
	test_result(ft_toupper4 == 'Z', "ft_toupper('Z')  ", ft_toupper4, 90);
	test_result(ft_toupper5 == '0', "ft_toupper('0')  ", ft_toupper5, 48);
	test_result(ft_toupper6 == '1', "ft_toupper('1')  ", ft_toupper6, 49);
	test_result(ft_toupper7 == '@', "ft_toupper('@')  ", ft_toupper7, 64);
	test_result(ft_toupper8 == 65, "ft_toupper(65)   ", ft_toupper8, 65);    // 'A'
	test_result(ft_toupper9 == 67, "ft_toupper(99)   ", ft_toupper9, 67);    // 'c' to 'C'
	test_result(ft_toupper10 == 0, "ft_toupper(0)    ", ft_toupper10, 0);
	test_result(ft_toupper11 == 300, "ft_toupper(300)  ", ft_toupper11, 300);
	test_result(ft_toupper12 == -10, "ft_toupper(-10)  ", ft_toupper12, -10);
	test_result(ft_toupper13 == ' ', "ft_toupper(' ')  ", ft_toupper13, ' ');
	test_result(ft_toupper14 == '\n', "ft_toupper('\\n') ", ft_toupper14, 10);
	color_string("ft_toupper tests completed.");
	printf("\n");

	// ft_tolower
	color_string("ft_tolower function tests:");
	int ft_tolower1 = ft_tolower('A');
	int ft_tolower2 = ft_tolower('Z');
	int ft_tolower3 = ft_tolower('a');
	int ft_tolower4 = ft_tolower('z');
	int ft_tolower5 = ft_tolower('0');
	int ft_tolower6 = ft_tolower('1');
	int ft_tolower7 = ft_tolower('@');
	int ft_tolower8 = ft_tolower(65);  // 'A'
	int ft_tolower9 = ft_tolower(67);  // 'C'
	int ft_tolower10 = ft_tolower(0);
	int ft_tolower11 = ft_tolower(300);
	int ft_tolower12 = ft_tolower(-10);
	int ft_tolower13 = ft_tolower(' ');
	int ft_tolower14 = ft_tolower('\n'); // newline

	test_result(ft_tolower('A') == 'a', "ft_tolower('A')  ", ft_tolower1, 97); // 'A' to 'a'
	test_result(ft_tolower('Z') == 'z', "ft_tolower('Z')  ", ft_tolower2, 122); // 'Z' to 'z'
	test_result(ft_tolower('a') == 'a', "ft_tolower('a')  ", ft_tolower3, 97);
	test_result(ft_tolower('z') == 'z', "ft_tolower('z')  ", ft_tolower4, 122);
	test_result(ft_tolower('0') == '0', "ft_tolower('0')  ", ft_tolower5, 48);
	test_result(ft_tolower('1') == '1', "ft_tolower('1')  ", ft_tolower6, 49);
	test_result(ft_tolower('@') == '@', "ft_tolower('@')  ", ft_tolower7, 64);
	test_result(ft_tolower(65) == 97, "ft_tolower(65)   ", ft_tolower8, 97);    // 'A' to 'a'
	test_result(ft_tolower(67) == 99, "ft_tolower(67)   ", ft_tolower9, 99);    // 'C' to 'c'
	test_result(ft_tolower(0) == 0, "ft_tolower(0)    ", ft_tolower10, 0);
	test_result(ft_tolower(300) == 300, "ft_tolower(300)  ", ft_tolower11, 300);
	test_result(ft_tolower(-10) == -10, "ft_tolower(-10)  ", ft_tolower12, -10);
	test_result(ft_tolower(' ') == ' ', "ft_tolower(' ')  ", ft_tolower13, ' ');
	test_result(ft_tolower('\n') == '\n', "ft_tolower('\\n') ", ft_tolower14, 10);
	color_string("ft_tolower tests completed.");
	printf("\n");

	// ft_strlen
	color_string("Testing ft_strlen function:");
	int ft_strlen1 = ft_strlen("Hello");
	int ft_strlen2 = ft_strlen("World");
	int ft_strlen3 = ft_strlen("");
	int ft_strlen4 = ft_strlen("12345");
	int ft_strlen5 = ft_strlen("!@#$%");
	int ft_strlen6 = ft_strlen(" ");
	int ft_strlen7 = ft_strlen("Hello, World!");
	int ft_strlen8 = ft_strlen("1234567890");
	int ft_strlen9 = ft_strlen("A");
	int ft_strlen10 = ft_strlen("Z");
	int ft_strlen11 = ft_strlen("abcdefghijklmnopqrstuvwxyz");

	test_result(ft_strlen1 == 5, "ft_strlen(\"Hello\")                       ", ft_strlen1, 5);
	test_result(ft_strlen2 == 5, "ft_strlen(\"World\")                       ", ft_strlen2, 5);
	test_result(ft_strlen3 == 0, "ft_strlen(\"\")                            ", ft_strlen3, 0);
	test_result(ft_strlen4 == 5, "ft_strlen(\"12345\")                       ", ft_strlen4, 5);
	test_result(ft_strlen5 == 5, "ft_strlen(\"!@#$%\")                       ", ft_strlen5, 5);
	test_result(ft_strlen6 == 1, "ft_strlen(\" \")                           ", ft_strlen6, 1);
	test_result(ft_strlen7 == 13, "ft_strlen(\"Hello, World!\")               ", ft_strlen7, 13);
	test_result(ft_strlen8 == 10, "ft_strlen(\"1234567890\")                  ", ft_strlen8, 10);
	test_result(ft_strlen9 == 1, "ft_strlen(\"A\")                           ", ft_strlen9, 1);
	test_result(ft_strlen10 == 1, "ft_strlen(\"Z\")                           ", ft_strlen10, 1);
	test_result(ft_strlen11 == 26, "ft_strlen(\"abcdefghijklmnopqrstuvwxyz\")  ", ft_strlen11, 26);
	color_string("ft_strlen tests completed.");
	printf("\n");

	// ft_strchr
	color_string("Testing ft_strchr function:");
	char *str = "Hello World!";
    char *ft_strchr1 = ft_strchr(str, 'H');
    char *ft_strchr2 = ft_strchr(str, 'd');
    char *ft_strchr3 = ft_strchr(str, '!');
    char *ft_strchr4 = ft_strchr(str, 'x');
    char *ft_strchr5 = ft_strchr(str, '\0');
    char *ft_strchr6 = ft_strchr(str, 'h');
    char *ft_strchr7 = ft_strchr(str, 'e');
    char *ft_strchr8 = ft_strchr(str, 'l');
    char *ft_strchr9 = ft_strchr(str, 'o');
    char *ft_strchr10 = ft_strchr(str, 'W');
    char *ft_strchr11 = ft_strchr(str, 'r');
    char *ft_strchr12 = ft_strchr(str, ' ');

    test_resultc(ft_strchr1 == str, "ft_strchr(\"Hello World!\", 'H')  ", ft_strchr1, "72");
    test_resultc(ft_strchr2 == str + 10, "ft_strchr(\"Hello World!\", 'd')  ", ft_strchr2, "100");
    test_resultc(ft_strchr3 == str + 11, "ft_strchr(\"Hello World!\", '!')  ", ft_strchr3, "33");
    test_resultc(ft_strchr4 == NULL, "ft_strchr(\"Hello World!\", 'x')  ", ft_strchr4, "NULL");
    test_resultc(ft_strchr5 == str + 12, "ft_strchr(\"Hello World!\", '\\0') ", ft_strchr5, "0");
    test_resultc(ft_strchr6 == NULL, "ft_strchr(\"Hello World!\", 'h')  ", ft_strchr6, "NULL");
    test_resultc(ft_strchr7 == str + 1, "ft_strchr(\"Hello World!\", 'e')  ", ft_strchr7, "101");
    test_resultc(ft_strchr8 == str + 2, "ft_strchr(\"Hello World!\", 'l')  ", ft_strchr8, "108");
    test_resultc(ft_strchr9 == str + 4, "ft_strchr(\"Hello World!\", 'o')  ", ft_strchr9, "111");
    test_resultc(ft_strchr10 == str + 6, "ft_strchr(\"Hello World!\", 'W')  ", ft_strchr10, "87");
    test_resultc(ft_strchr11 == str + 8, "ft_strchr(\"Hello World!\", 'r')  ", ft_strchr11, "114");
    test_resultc(ft_strchr12 == str + 5, "ft_strchr(\"Hello World!\", ' ')  ", ft_strchr12, "32");
	color_string("ft_strchr tests completed.");
	printf("\n");

	// ft_strrchr
	color_string("Testing ft_strrchr function:");
	char *ft_strrchr1 = ft_strrchr(str, 'H');
	char *ft_strrchr2 = ft_strrchr(str, 'e');
	char *ft_strrchr3 = ft_strrchr(str, 'l');
	char *ft_strrchr4 = ft_strrchr(str, 'o');
	char *ft_strrchr5 = ft_strrchr(str, 'W');
	char *ft_strrchr6 = ft_strrchr(str, 'r');
	char *ft_strrchr7 = ft_strrchr(str, ' ');
	char *ft_strrchr8 = ft_strrchr(str, 'd');
	char *ft_strrchr9 = ft_strrchr(str, '!');
	char *ft_strrchr10 = ft_strrchr(str, 'x');
	char *ft_strrchr11 = ft_strrchr(str, '\0');
	char *ft_strrchr12 = ft_strrchr(str, 'h');
	char *ft_strrchr13 = ft_strrchr(str, '1');

	test_resultc(ft_strrchr1 == str, "ft_strrchr(\"Hello World!\", 'H') ", ft_strrchr1, "72");
	test_resultc(ft_strrchr2 == str + 1, "ft_strrchr(\"Hello World!\", 'e') ", ft_strrchr2, "101");
	test_resultc(ft_strrchr3 == str + 9, "ft_strrchr(\"Hello World!\", 'l') ", ft_strrchr3, "108");
	test_resultc(ft_strrchr4 == str + 7, "ft_strrchr(\"Hello World!\", 'o') ", ft_strrchr4, "111");
	test_resultc(ft_strrchr5 == str + 6, "ft_strrchr(\"Hello World!\", 'W') ", ft_strrchr5, "87");
	test_resultc(ft_strrchr6 == str + 8, "ft_strrchr(\"Hello World!\", 'r') ", ft_strrchr6, "114");
	test_resultc(ft_strrchr7 == str + 5, "ft_strrchr(\"Hello World!\", ' ') ", ft_strrchr7, "32");
	test_resultc(ft_strrchr8 == str + 10, "ft_strrchr(\"Hello World!\", 'd') ", ft_strrchr8, "100");
	test_resultc(ft_strrchr9 == str + 11, "ft_strrchr(\"Hello World!\", '!') ", ft_strrchr9, "33");
	test_resultc(ft_strrchr10 == NULL, "ft_strrchr(\"Hello World!\", 'x') ", ft_strrchr10, "NULL");
	test_resultc(ft_strrchr11 == str + 12, "ft_strrchr(\"Hello World!\", '\\0')", ft_strrchr11, "0");
	test_resultc(ft_strrchr12 == NULL, "ft_strrchr(\"Hello World!\", 'h') ", ft_strrchr12, "NULL");
	test_resultc(ft_strrchr13 == NULL, "ft_strrchr(\"Hello World!\", '1') ", ft_strrchr13, "NULL");
	color_string("ft_strrchr tests completed.");
	printf("\n");

	// ft_strncmp
	color_string("Testing ft_strncmp function:");
	int ft_strncmp1 = ft_strncmp("Hello", "Hello", 5);
	int ft_strncmp2 = ft_strncmp("Hello", "World", 5);
	int ft_strncmp3 = ft_strncmp("World", "Hello", 5);
	int ft_strncmp4 = ft_strncmp("Hello", "Hello!", 5);
	int ft_strncmp5 = ft_strncmp("Hello", "Hello", 3);
	int ft_strncmp6 = ft_strncmp("Hello", "Hello", 0);
	int ft_strncmp7 = ft_strncmp("Hello", "Hello", 10);
	int ft_strncmp8 = ft_strncmp("Hello", "Hello World", 5);
	int ft_strncmp9 = ft_strncmp("ab\0c", "ab\0d", 4);
	int ft_strncmp10 = ft_strncmp("Hello", "HelLo", 5);

	test_result(ft_strncmp1 == 0, "ft_strncmp(\"Hello\", \"Hello\", 5)       ", ft_strncmp1, 0);
	test_result(ft_strncmp2 == -15, "ft_strncmp(\"Hello\", \"World\", 5)       ", ft_strncmp2, -15);
	test_result(ft_strncmp3  == 15, "ft_strncmp(\"World\", \"Hello\", 5)       ", ft_strncmp3 , 15);
	test_result(ft_strncmp4 == 0, "ft_strncmp(\"Hello\", \"Hello!\", 5)      ", ft_strncmp4, 0);
	test_result(ft_strncmp5 == 0, "ft_strncmp(\"Hello\", \"Hello\", 3)       ", ft_strncmp5, 0);
	test_result(ft_strncmp6 == 0, "ft_strncmp(\"Hello\", \"Hello\", 0)       ", ft_strncmp6, 0);
	test_result(ft_strncmp7 == 0, "ft_strncmp(\"Hello\", \"Hello\", 10)      ", ft_strncmp7, 0);
	test_result(ft_strncmp8 == 0, "ft_strncmp(\"Hello\", \"Hello World\", 5) ", ft_strncmp8, 0);
	test_result(ft_strncmp9 == 0, "ft_strncmp(\"ab\\0c\", \"ab\\0d\", 4)       ", ft_strncmp9, 0);
	test_result(ft_strncmp10 == 32, "ft_strncmp(\"Hello\", \"HelLo\", 5)       ", ft_strncmp10, 32);
	color_string("ft_strncmp tests completed.");
	printf("\n");

	// ft_strnstr
	color_string("Testing ft_strnstr function:");
	char *ft_strnstr1 = ft_strnstr(str, "World", 11);
	char *ft_strnstr2 = ft_strnstr(str, "Hello", 11);
	char *ft_strnstr3 = ft_strnstr(str, "!", 11);
	char *ft_strnstr4 = ft_strnstr(str, "Hello World", 11);
	char *ft_strnstr5 = ft_strnstr(str, "Hello", 5);

	test_resultc(ft_strnstr1 == str + 6, "ft_strnstr(\"Hello World\", \"World\", 11)       ", ft_strnstr1, "87");
	test_resultc(ft_strnstr2 == str, "ft_strnstr(\"Hello World\", \"Hello\", 11)       ", ft_strnstr2, "72");
	test_resultc(ft_strnstr3 ==  NULL, "ft_strnstr(\"Hello World\", \"!\", 11)           ", ft_strnstr3, "NULL");
	test_resultc(ft_strnstr4 == str, "ft_strnstr(\"Hello World\", \"Hello World\", 11) ", ft_strnstr4, "72");
	test_resultc(ft_strnstr5 == str, "ft_strnstr(\"Hello World\", \"Hello\", 5)        ", ft_strnstr5, "72");
	color_string("ft_strnstr tests completed.");
	printf("\n");

	// ft_strlcpy
	color_string("Testing ft_strlcpy function:");
	char buffer[10];
	int ft_strlcpy1 = ft_strlcpy(buffer, "Hello", 5);
	int ft_strlcpy2 = ft_strlcpy(buffer, "World", 10);
	int ft_strlcpy3 = ft_strlcpy(buffer, "Hello World", 10);
	int ft_strlcpy4 = ft_strlcpy(buffer, "Hello", 0);
	int ft_strlcpy5 = ft_strlcpy(buffer, "Hello", 1);

	test_result(ft_strlcpy1 == 5, "ft_strlcpy(buffer, \"Hello\", 5)        ", ft_strlcpy1, 5);
	test_result(ft_strlcpy2 == 5, "ft_strlcpy(buffer, \"World\", 10)       ", ft_strlcpy2, 5);
	test_result(ft_strlcpy3 == 11, "ft_strlcpy(buffer, \"Hello World\", 10) ", ft_strlcpy3, 11);
	test_result(ft_strlcpy4 == 5, "ft_strlcpy(buffer, \"Hello\", 0)        ", ft_strlcpy4, 5);
	test_result(ft_strlcpy5 == 5, "ft_strlcpy(buffer, \"Hello\", 1)        ", ft_strlcpy5, 5);
	color_string("ft_strlcpy tests completed.");
	printf("\n");

	// ft_strlcat
	color_string("Testing ft_strlcat function:");
	char ft_strlcat1[20] = "Hello";
	char ft_strlcat2[20] = "Hello World";
	char ft_strlcat3[20] = "Hello World!";
	char ft_strlcat4[20] = "Hello World!";
	char ft_strlcat5[20] = "Hello World!";
	char ft_strlcat6[20] = "Hello World!";

	size_t result1 = ft_strlcat(ft_strlcat1, " World", 20);
	test_result(result1 == 11, "ft_strlcat(ft_strlcat1, \" World\", 20)", result1, 11);
	size_t result2 = ft_strlcat(ft_strlcat2, "!", 20);
	test_result(result2 == 12, "ft_strlcat(ft_strlcat2, \"!\", 20)     ", result2, 12);
    size_t result3 = ft_strlcat(ft_strlcat3, "Hello", 20);
    test_result(result3 == 17, "ft_strlcat(ft_strlcat3, \"Hello\", 20) ", result3, 17);
    size_t result4 = ft_strlcat(ft_strlcat4, "Hello", 5);
    test_result(result4 == 10, "ft_strlcat(ft_strlcat4, \"Hello\", 5)  ", result4, 10);
    size_t result5 = ft_strlcat(ft_strlcat5, "Hello", 0);
    test_result(result5 == 5, "ft_strlcat(ft_strlcat5, \"Hello\", 0)  ", result5, 5);
    size_t result6 = ft_strlcat(ft_strlcat6, "Hello", 1);
    test_result(result6 == 6, "ft_strlcat(ft_strlcat6, \"Hello\", 1)  ", result6, 6);
	
	color_string("ft_strlcat tests completed.");
	printf("\n");
	// All Basic Character / String Functions tests completed

	return (0);
}
