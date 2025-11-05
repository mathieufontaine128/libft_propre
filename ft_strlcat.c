/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:43:49 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/03 13:46:45 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

size_t	ft_strlcat(char *dest, const char *src, size_t siz)
{
	size_t	i;
	size_t	j;
	size_t	init_dest_len;
	size_t	src_len;

	i = 0;
	while (dest[i] && i < siz)
		i++;
	init_dest_len = i;
	src_len = ft_strlen(src);
	if (siz <= init_dest_len)
		return (src_len + siz);
	j = 0;
	while (src[j] && (i + j) < siz - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (init_dest_len + src_len);
}
/*#include <stddef.h>
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char d[20] = "hello";
	const char *s1 = " world";

	char d2[20] = "hello";
	const char *s2 = " world";
		
	strcpy(d, "Hello");
	printf("Result: %zu\n", ft_strlcat(d, " World", 20));
	printf("Dest: %s\n", d);


	strcpy(d, "Hello");
	printf("Result: %zu\n", ft_strlcat(d, " World", 10));
	printf("Dest: %s\n", d);


	strcpy(d, "Hello");
	printf("Result: %zu\n", ft_strlcat(d, " World", 3));
	printf("Dest: %s\n", d);
}*/	
