#include <stdio.h>
#include "libft.h"
 
int main(void)
{
	printf("[%s]\n", ft_strtrim(" . abcd", " "));
	printf("[%s]\n", ft_strtrim("ab cd  f    ", " "));
	printf("[%s]\n", ft_strtrim("xxxz  test with x and z and x .  zx  xx z", "z x"));
	printf("[%s]\n", ft_strtrim("   abxfg  ", "x"));
 	printf("[%s]\n", ft_strtrim(".teste, bla ,.,.", ",."));
}

