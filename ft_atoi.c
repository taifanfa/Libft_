/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 12:40:40 by tmorais-          #+#    #+#             */
/*   Updated: 2025/04/28 17:36:34 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	i;
	int	sign;

	num = 0;
	i = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = (num * 10) + (nptr[i] - '0');
		i++;
	}
	return (num * sign);
}

// #include <stdlib.h>
// #include <stdio.h>

// int	main(void)
// {
// 	const char	*s1 = "   +-597abcd";
// 	int			ft_result;
// 	int			lib_result;

// 	ft_result = ft_atoi(s1);
// 	lib_result = atoi(s1);
// 	printf("ft_atoi:  %d\n", ft_result);
// 	printf("atoi:     %d\n", lib_result);
// 	return (0);
// }
