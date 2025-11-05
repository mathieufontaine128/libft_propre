/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 06:43:11 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/03 23:53:06 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i] != 0)
	{
		i++;
	}
	return (i);
}

int	ft_total_len(char *s1, char *s2)
{
	int	total;

	total = ft_strlen(s1) + ft_strlen(s2);
	return (total);
}

char	*ft_strcat(char *tab, char *s1, char *s2)
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

char	*ft_strjoin(char *s1, char *s2)
{
	char	*tab;
	int	tab_len;

	tab_len = ft_total_len(s1, s2);
	if (tab_len == 0)
	{
		tab = (char *)malloc(1);
		if (!(tab))
			return (NULL);
		tab[0] = '\0';
		return (tab);
	}
	tab = (char *)malloc((tab_len + 1) sizeof(char *));
	if (!tab)
		return (NULL);
	ft_strcat(tab, s1, s2);
	return (tab);
}
/*#include <stdio.h>
int	main()
{
	char *tabresult = ft_strjoin("hello", "world");
	printf("%s\n", tabresult);
	free(tabresult);

}*/
