#include "../includes/libft.h"
#include <stdio.h>             

int main(void)
{
	test_string("Testing ft_isalpha function:");
    test_result(ft_isalpha('A') == 1, "ft_isalpha('A')", ft_isalpha('A'));
	test_result(ft_isalpha('Z') == 1, "ft_isalpha('Z')", ft_isalpha('Z'));
	test_result(ft_isalpha('a') == 1, "ft_isalpha('a')", ft_isalpha('a'));
	test_result(ft_isalpha('z') == 1, "ft_isalpha('z')", ft_isalpha('z'));
	test_result(ft_isalpha('4') == 0, "ft_isalpha('4')", ft_isalpha('4'));
	test_result(ft_isalpha('@') == 0, "ft_isalpha('@')", ft_isalpha('@'));
	test_result(ft_isalpha(65) == 1, "ft_isalpha(65) ", ft_isalpha(65));  // 'A'
	test_result(ft_isalpha(99) == 1, "ft_isalpha(99) ", ft_isalpha(99));  // 'c'
	test_result(ft_isalpha(0) == 0, "ft_isalpha(0)  ", ft_isalpha(0));
	test_result(ft_isalpha(300) == 0, "ft_isalpha(300)", ft_isalpha(300));
	test_result(ft_isalpha(-10) == 0, "ft_isalpha(-10)", ft_isalpha(-10));
	test_string("isalpha tests completed.");
	printf("\n");
	test_string("Testing ft_isdigit function:");
	test_result(ft_isdigit('0') == 1, "ft_isdigit('0') ", ft_isdigit('0'));
	test_result(ft_isdigit('1') == 1, "ft_isdigit('1') ", ft_isdigit('1'));
	test_result(ft_isdigit('2') == 1, "ft_isdigit('2') ", ft_isdigit('2'));
	test_result(ft_isdigit('3') == 1, "ft_isdigit('3') ", ft_isdigit('3'));
	test_result(ft_isdigit('4') == 1, "ft_isdigit('4') ", ft_isdigit('4'));
	test_result(ft_isdigit('5') == 1, "ft_isdigit('5') ", ft_isdigit('5'));
	test_result(ft_isdigit('6') == 1, "ft_isdigit('6') ", ft_isdigit('6'));
	test_result(ft_isdigit('7') == 1, "ft_isdigit('7') ", ft_isdigit('7'));
	test_result(ft_isdigit('8') == 1, "ft_isdigit('8') ", ft_isdigit('8'));
	test_result(ft_isdigit('9') == 1, "ft_isdigit('9') ", ft_isdigit('9'));
	test_result(ft_isdigit('10') == 0, "ft_isdigit('10')", ft_isdigit('10'));
	test_result(ft_isdigit(1) == 0, "ft_isdigit(1)   ", ft_isdigit(1));
	test_result(ft_isdigit("A") == 0, "ft_isdigit('A') ", ft_isdigit("A"));
	test_string("isdigit tests completed.");

    return (0);
}