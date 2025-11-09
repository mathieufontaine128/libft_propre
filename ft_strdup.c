/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 23:32:12 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/09 21:16:19 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strcpy(char *dest, char const *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char const *src)
{
	char	*copy;
	size_t	len;

	copy = NULL;
	len = ft_strlen(src) + 1;
	copy = (char *) malloc(len * sizeof(char));
	if (!copy)
		return (NULL);
	ft_strcpy(copy, src);
	return (copy);
}
