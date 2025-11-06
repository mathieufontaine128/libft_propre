/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 23:24:21 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/06 23:58:40 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

void	*ft_calloc(size_t memb, size_t size)
{
	void	*tab;
	size_t	size_total;

	size_total = memb * size;
	tab = malloc(size_total);
	if (!tab)
		return (NULL);
	ft_bzero(tab, size_total);
	return (tab);
}
