#include "../includes/libft.h"
#include <stdio.h>             

int main(void)
{

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


    return (0);
}