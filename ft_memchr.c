/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:56:16 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/07 12:04:14 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*block;

	block = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (block[i] == (unsigned char)c)
			return ((void *)&block[i]);
		i++;
	}
	return (NULL);
}
