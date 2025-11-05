/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:48:47 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/03 13:49:36 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
#include <stdio.h>

int main()
{
	printf("%c\n", ft_toupper('a'));    // 'A'
	printf("%c\n", ft_toupper('z'));    // 'Z'
	printf("%c\n", ft_toupper('A'));    // 'A' 
	printf("%c\n", ft_toupper('1'));    // '1'
	printf("%c\n", ft_toupper(' '));    // ' '
	printf("%c\n", ft_toupper('@'));    // 'é'	
	printf("%c\n", ft_toupper(-1));    // c = -1 

}*/
