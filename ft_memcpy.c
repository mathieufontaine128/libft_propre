/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 07:59:41 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/03 13:35:04 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*void	*ft_memcpy(void *dest, void *str, unsigned int n)
{
		unsigned int	i;

		i = 0;
		while(i <= n)
		{
			dest[i] = src[i];
		}
		return(dest);
}*/

void	*ft_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	return (dest);
}
/*#include <stdio.h>

int	main(void)
{
	char	td[] = "123456789";
	char	ts[] = "abcdefghi";
	printf("before td = %s\n", td);
	printf("ts = %s\n", ts);
	ft_memcpy(td, ts, 2);
	printf("after td = %s\n", td);
}*/
