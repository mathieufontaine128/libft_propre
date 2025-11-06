/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:53:37 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/06 21:33:57 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if (s[i] == (char *)c)
		return ((char *)&s[i]);
	while (i >= 0)
	{
		if (s[i] == (char *)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
