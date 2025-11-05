/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:51:02 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/03 13:53:02 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == ((char)c))
		return ((char *)&s[i]);
	return (0);
}
/*void	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while(s[i] != (char)c)
	{
		if (s[i] == '\0')
			return(NULL);
		i++;
	}
	return((char *)&s[i]);
}
#include <stdio.h>
int	main(void)
{
	if (ft_strchr("y a t il un u dans cette chaine", 'z') != NULL)
		printf("oui");
	else
		printf("non");
}*/
