/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:56:16 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/03 13:58:44 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*txt;
	size_t	i;

	txt = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (txt[i] == (unsigned char)c)
			return ((void *)&txt[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	if(ft_memchr("un deux trois", 'o', 5) != 0)
		printf("oui");
	else
		printf("non");
}*/
