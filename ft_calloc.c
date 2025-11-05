/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 23:24:21 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/03 23:30:09 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_calloc(size_t memb, size_t size)
{
	void	*tab;
	size_t	size_total;
	size_t	i;
	unsigned char	*p;

	if (memb == 0 || size == 0)
		return (malloc(1))

	size_total = memb * size;
	tab = malloc(size_total);
	if (!tab)
		return (0);
	p = (unsigned char *)tab;
	i = 0;
	while (i < size_total)
	{
		p[i] = '\0';
		i++;
	}
	return (tab);
}
/*#include <stdio.h>
int	main(void)
{
	size_t	i;
	size_t	index;
	size_t	poid;
	char	*tab;

	index = 5;
	poid = 2;
	tab = ft_calloc(index, poid);

	i = 0;
	printf("calloc pour memb = %zu et size %zu :", index, poid);
	while(i > index)
	{
		if(tab[i] == '\0')
			printf("0");
	}
	free(tab);		
}*/
