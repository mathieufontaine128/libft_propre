/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:56:16 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/06 22:43:43 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*block;
	size_t	i;

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
