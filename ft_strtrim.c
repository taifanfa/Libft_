/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 19:14:47 by tmorais-          #+#    #+#             */
/*   Updated: 2025/06/26 19:22:10 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

static size_t	ft_isinset(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	i = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_isinset(s1[start], set))
		start++;
	while (end > start && ft_isinset(s1[end - 1], set))
		end--;
	result = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!result)
		return (NULL);
	while (i < end - start)
	{
		result[i] = s1[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
