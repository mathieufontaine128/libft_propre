/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 07:59:21 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/03 13:29:48 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char *tab;
 
	i = 0;
	tab = (unsigned char *)s;
	while (i < n)
	{
		tab[i] = (unsigned char)c;
		i++;
	}
	return (tab);
}*/
void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned char	*tab;

	tab = (unsigned char *)s;
	while (n > 0)
	{
		*tab++ = (unsigned char)c;
		n--;
	}
	return (tab);
}
/*#include <unistd.h>

int	main(void)
{
	char	txt[6] = "Hello";
	ft_memset(txt, 'A', 3);
	write(1, txt, 6);
}*/
