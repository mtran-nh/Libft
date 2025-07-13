/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtran-nh <mtran-nh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 14:42:28 by mtran-nh          #+#    #+#             */
/*   Updated: 2025/07/10 13:39:18 by mtran-nh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char str[] = "Welcome home";
// 	const char ch = 'n';

// 	char *result = (char *)ft_memchr(str, ch, 12);

// 	if (result != NULL)
// 	{
// 		printf("'%c' found at position %ld\n", ch, result - str);
// 	}
// 	else
// 	{
// 		printf("'%c' not found in the string\n", ch);
// 	}

// 	return (0);
// }