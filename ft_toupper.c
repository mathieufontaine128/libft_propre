/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:47:55 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/03 13:48:26 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
#include <stdio.h>

int main()
{
	printf("%c\n", ft_toupper('a'));  
	printf("%c\n", ft_toupper('z'));
	printf("%c\n", ft_toupper('A'));
	printf("%c\n", ft_toupper('1'));
	printf("%c\n", ft_toupper(' '));
	printf("%c\n", ft_toupper('@'));
	printf("%c\n", ft_toupper(-1));
}*/
