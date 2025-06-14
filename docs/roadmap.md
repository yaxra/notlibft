# Roadmap

Libraries will be done following this sequence as much as possible (where applicable)

|    |Basic Character / String Functions | Description | 
|----|-----------|-----------------------------------|
| ✅ |[ft_isalpha](../src/ft_isalpha.c) | checks if character is alphabetic |
| ❌ |ft_isdigit | checks if character is a digit|
| ❌ |ft_isalnum | checks if character is alphanumeric|
| ❌ |ft_isascii | checks if character is ASCII|
| ❌ |ft_isprint | checks if character is printable|
| ❌ |ft_toupper | converts to uppercase|
| ❌ |ft_tolower | converts to lowercase|
| ❌ |ft_strlen | string length|
| ❌ |ft_strchr | finds first occurrence of character in string|
| ❌ |ft_strrchr | finds last occurrence of character in string|
| ❌ |ft_strncmp | compares strings up to n bytes|
| ❌ |ft_strnstr | finds substring in string|
| ❌ |ft_strlcpy | copies string with size limit|
| ❌ |ft_strlcat | concatenates strings with size limit|

|     |Memory Functions | Description |
|-----|---------------|---------------|
| ❌ |ft_memset | fills memory with a byte
| ❌ |ft_bzero | fills memory with zero
| ❌ |ft_memcpy | copies memory
| ❌ |ft_memmove | copies memory with overlap handling
| ❌ |ft_memchr | searches for byte in memory
| ❌ |ft_memcmp | compares memory blocks

| |Memory Allocation | Description |
|-----|--------------|-------------|
| ❌ | ft_calloc |allocates and zeroes memory|
| ❌ | ft_strdup |duplicates string|

|  |Conversions / Numbers | Description |
|----|----------------------|-------------|
| ❌ |ft_atoi | converts string to integer
| ❌ |ft_itoa | converts integer to string more challenging

| |Output Functions | Description |
|-|-----------------|-------------|
| ❌ |ft_putchar_fd | prints character to file descriptor |
| ❌ |ft_putstr_fd | prints string to file descriptor |
| ❌ |ft_putendl_fd | prints string + newline to file descriptor |
| ❌ |ft_putnbr_fd | prints number to file descriptor challenging |

| | Advanced Functions | Description |
|-|-------------------------------|-------------|
| ❌ | ft_split | splits string into array of strings  |
| ❌ | ft_strtrim | trims characters from start/end of string |
| ❌ | ft_substr | extracts substring |
| ❌ | ft_strjoin | concatenates two strings |
| ❌ | ft_strmapi | applies function to each character |
| ❌ | ft_striteri | applies function with index to each character |
