#ifndef LIBFT_H   
#define LIBFT_H

#include <stdlib.h>

void   test_result(int condition, const char* message, int result, int expected);
void   test_resultc(int condition, const char* message, const char* result, const char* expected);
void   color_string(const char* message);

int    ft_isalpha(int c);
int    ft_isdigit(int c);
int    ft_isalnum(int c);
int    ft_isascii(int c);
int    ft_isprint(int c);
int    ft_toupper(int c);
int    ft_tolower(int c);
int    ft_strncmp(const char* s1, const char* s2, size_t n);

size_t ft_strlen(const char* s);
size_t ft_strlcpy(char* dst, const char* src, size_t size);
size_t ft_strlcat(char* dst, const char* src, size_t size);

char*  ft_strchr(const char* s, int c);
char*  ft_strrchr(const char* s, int c);
char*  ft_strnstr(const char* big, const char* little, size_t len);

#endif