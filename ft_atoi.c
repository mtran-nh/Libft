/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtran-nh <mtran-nh@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:16:53 by mtran-nh          #+#    #+#             */
/*   Updated: 2025/07/17 17:57:57 by mtran-nh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	n;

	sign = 1;
	n = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isdigit(*str) == 1)
	{
		n *= 10;
		n += (*str - '0');
		str++;
	}
	return (n * sign);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s;

// 	s = " 1234ab567";
// 	printf("%d\n", ft_atoi(s));
// }