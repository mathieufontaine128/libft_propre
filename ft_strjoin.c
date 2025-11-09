/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 06:43:11 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/09 21:20:40 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_total_len(char const *s1, char const *s2)
{
	int	total;

	total = ft_strlen(s1) + ft_strlen(s2);
	return (total);
}

static char	*ft_strcat(char *tab, char const *s1, char const *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1 && s1[i] != '\0')
	{
		tab[i] = s1[i];
		i++;
	}
	while (s2 && s2[j] != '\0')
	{
		tab[i + j] = s2[j];
		j++;
	}
	tab[i + j] = '\0';
	return (tab);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	int		tab_len;

	tab_len = ft_total_len(s1, s2);
	if (tab_len == 0)
	{
		tab = (char *)malloc(1);
		if (!(tab))
			return (NULL);
		tab[0] = '\0';
		return (tab);
	}
	tab = (char *)malloc((tab_len + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	ft_strcat(tab, s1, s2);
	return (tab);
}
