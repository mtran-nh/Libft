/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtran-nh <mtran-nh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 19:06:59 by mtran-nh          #+#    #+#             */
/*   Updated: 2025/07/07 14:03:26 by mtran-nh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	*s = "hello";
// 	char		*p;

// 	p = ft_strchr(s, 'l');
// 	printf("%s", p);
// 	return (0);
// }
