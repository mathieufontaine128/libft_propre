/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 23:53:50 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/08 13:48:24 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
        char    *result;
        size_t  start;
        size_t  end;
        size_t  i;

        if (!s1)
                return (NULL);
        if (!set)
                return (ft_strdup(s1));
        start = 0;
        while (s1[start] && ft_strchr(set, s1[start]))
                start++;
        end = ft_strlen(s1);
        while (end > start && ft_strchr(set, s1[end - 1]))
                end--;
        result = (char *)malloc(sizeof(char) * (end - start + 1));
        if (!result)
                return (NULL);
        i = 0;
        while (start < end)
                result[i++] = s1[start++];
        result[i] = '\0';
        return (result);
}
