#include "../includes/libft.h"

size_t ft_strlcat(char* dst, const char* src, size_t size)
{
    size_t dstlen = ft_strlen(dst);
    size_t srclen = ft_strlen(src);
    size_t i;

    if (size <= dstlen)
        return size + srclen;

    i = 0;
    while (src[i] && (dstlen + i) < (size - 1)) {
        dst[dstlen + i] = src[i];
        i++;
    }

    dst[dstlen + i] = '\0';

    return dstlen + srclen;
}
