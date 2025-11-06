/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 07:59:41 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/06 18:18:49 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.c"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*to;
	char	*from;

	to = dest;
	from = src;
	i = 0;
	while (i < n)
	{
		*(to + i) = *(from + i);
		i++;
	}
	return (dest);
}
