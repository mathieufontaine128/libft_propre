/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 23:53:50 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/03 23:57:48 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_strchr(char const *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)&s[i]);
}

int	ft_strlen(char const*str)
{
	int	len;
	
	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*copy;
	int	start;
	int	end;
	int	i;

	if (!s1)
		return(NULL);
	if (!set)
	{
		copy = malloc((ft_strlen(s1) + 1) * sizeof(char));
		if (!copy)
			return(0);
		i = 0;
		while(s1[i])
		{
			copy[i] = s1[i];
			i++;
		}
		copy[i] = '\0';
		return(copy);
	}
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		 start++;
	while (end > start && ft_strchr(set, s1[start]))
		 end--;
	copy = malloc((end - start + 2) * sizeof(char));
	if (!copy)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		copy[i] = s1[start];
		start++;
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*#include <stdio.h>
int	main(void)
{
	    char *result;

    result = ft_strtrim("   hello world   ", " ");
    printf("'%s'\n", result);  // 'hello world'
    free(result);

    result = ft_strtrim("xxxHelloxxx", "x");
    printf("'%s'\n", result);  // 'Hello'
    free(result);

    result = ft_strtrim("..!!Hello!!..", ".!");
    printf("'%s'\n", result);  // 'Hello'
    free(result);

    result = ft_strtrim("xxx", "x");
    printf("'%s'\n", result);  // ''
    free(result);

    return (0);
}*/
