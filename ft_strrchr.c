/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtran-nh <mtran-nh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 12:53:55 by mtran-nh          #+#    #+#             */
/*   Updated: 2025/07/12 21:33:25 by mtran-nh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			len;
	const char	*p;

	len = ft_strlen(s);
	p = s + len - 1;
	if ((char)c == '\0')
		return ((char *)p + 1);
	while (p >= s)
	{
		if (*p == (char)c)
			return ((char *)p);
		p--;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	*s = "teste";
// 	char		*p;

// 	p = ft_strrchr(s, '\0');
// 	printf("Adress: %p | Value: %c", p, *p);
// 	return (0);
// }
