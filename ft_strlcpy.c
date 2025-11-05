/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:39:28 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/03 13:41:08 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(const char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = ft_strlen(src);
	if (src_len == 0)
		return (src_len);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
/*unsigned int	ft_pluspetit(unsigned int a, unsigned int b, unsigned int c)
{
	unsigned int	pluspetit;

	pluspetit = a;
	if (b < pluspetit)
		pluspetit = b;
	else if (c < pluspetit)
		pluspetit = c;
	return (pluspetit);
}
int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	buffersize;
	unsigned char	*d;
	unsigned char	*s;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	dlen = ft_strlen(d);
	slen = ft_strlen(s);

	if (ft_pluspetit(dlen, slen, size) == slen)
		buffersize = slen - 1;
	else
		buffersize = ft_pluspetit(dlen, slen, size) - 1;
	while(i <= buffersize)
	{
		*d++ = *s++;
		i++;
	}
	*d = '\0';
	return(slen);
	// si dest > src > size :: size -1 + '\0'
	// si dest > size > src :: src -1 + '\0'
	// si src > dest > size :: size -1 + '\0'
	// si src > size > dest :: dest -1 + '\0'
	// si size > dest > src :: src -1 + '\0'
	// si size > src > dest :: dest -1 + '\0'
}

#include <stdio.h>
int	main(void)
{
	char	txtd[] = "1234";
	char	txts[] = "abcdefghijk";
	unsigned int	tabsize;

	tabsize = 2;
	
	printf("avant dest  = %s src = %s et size = %d\n", txtd, txts, tabsize);
	ft_strlcpy(txtd, txts, tabsize);
	printf("apres dest  = %s src = %s et size = %d\n", txtd, txts, tabsize);

	
}*/
