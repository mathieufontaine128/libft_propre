/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 07:59:21 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/09 17:11:41 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tab;

	tab = (unsigned char *)s;
	while (n > 0)
	{
		*tab++ = (unsigned char)c;
		n--;
	}
	return (s);
}
