/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:57:11 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/08 18:41:24 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_set_len(long nb)
{
	int	i;

	
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		i = 1;
		nb *= -1;
	}
	else
		i = 0;
	while(nb > 0)
	{
			nb /= 10;
			i++;	
	}
	return (i);
}
char	*ft_itoa(int n)
{
	char	*str;
	int	len;
	long	nb;

	nb = n;
	len = ft_set_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return(NULL);
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb; 
	}
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
/*#include <stdio.h>
int main(void)
{
	printf("%s",ft_itoa(0));
	printf("%s",ft_itoa(-2147483648LL));
	printf("%s",ft_itoa(0));
}*/
