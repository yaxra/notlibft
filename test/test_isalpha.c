#include "../includes/libft.h"
#include <stdio.h>             

int main(void)
{

    printf("ft_isalpha('A') = %d | Correct output: 1\n", ft_isalpha('A'));  
    printf("ft_isalpha('z') = %d | Correct output: 1\n", ft_isalpha('z'));  
    printf("ft_isalpha('4') = %d | Correct output: 0\n", ft_isalpha('4'));  
    printf("ft_isalpha('@') = %d | Correct output: 0\n", ft_isalpha('@'));  
	printf("ft_isalpha(65)  = %d | Correct output: 1\n", ft_isalpha(65));  // 'A'  
	printf("ft_isalpha(99)  = %d | Correct output: 1\n", ft_isalpha(99));  // 'c'   
    printf("ft_isalpha(0)   = %d | Correct output: 0\n", ft_isalpha(0));    
    printf("ft_isalpha(300) = %d | Correct output: 0\n", ft_isalpha(300));  
    printf("ft_isalpha(-10) = %d | Correct output: 0\n", ft_isalpha(-10));  

    return (0);
}