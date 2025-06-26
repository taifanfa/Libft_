/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 20:43:42 by tmorais-          #+#    #+#             */
/*   Updated: 2025/06/16 21:20:30 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlen(const char *s);

static char	*ft_fail_start(void)
{
	char	*array;

	array = (char *)malloc(1);
	if (!array)
		return (NULL);
	array[0] = '\0';
	return (array);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*array;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_fail_start());
	if (len > s_len - start)
		len = s_len - start;
	array = (char *)malloc(len + 1);
	if (!array)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		array[i] = s[start + i];
		i++;
	}
	array[i] = '\0';
	return (array);
}
