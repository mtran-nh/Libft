/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtran-nh <mtran-nh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 14:36:11 by mtran-nh          #+#    #+#             */
/*   Updated: 2025/07/10 14:40:29 by mtran-nh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		diff;

	i = 0;
	while (i < n)
	{
		diff = ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (diff != 0 || s1[i] == 0 || s2[i] == 0)
			return (diff);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s1[] = "hello";
// 	char	s2[] = "hell";

// 	printf("%d", ft_strncmp(s1, s2, 5));
// }
