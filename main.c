#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

int main(void)
{
    int fd = open("test.txt", O_CREAT | O_TRUNC | O_RDWR, 0644);
}