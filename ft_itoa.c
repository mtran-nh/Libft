/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtran-nh <mtran-nh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 20:20:58 by mtran-nh          #+#    #+#             */
/*   Updated: 2025/07/12 21:46:44 by mtran-nh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_strlen(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		len;
	long	nb;

	nb = n;
	len = int_strlen(nb);
	i = len - 1;
	if (nb == 0)
		return (ft_strdup("0"));
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	if (nb < 0)
	{
		s[0] = '-';
		nb *= -1;
	}
	while (nb != 0)
	{
		s[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	s[len] = '\0';
	return (s);
}
// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", int_strlen(123456));
// 	printf("%s\n", ft_itoa(123456));
// 	printf("%s", ft_itoa(-123456));
// }