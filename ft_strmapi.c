/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 18:44:32 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/08 21:12:59 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int	len;
	int	i;

	if (!(s) || !(f))
		return (NULL);
	len = ft_strlen(s) + 1;
	str =(char *)malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*#include <stdio.h>
char uppercase_with_index(unsigned int i, char c)
{
    if (i % 2 == 0)  // indices pairs
        return (ft_toupper(c));
    return (c);
}
int	main(void)
{
	printf("%s", ft_strmapi("HeLlO WoRlD", uppercase_with_index));
}*/
