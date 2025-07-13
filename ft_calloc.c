/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtran-nh <mtran-nh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:33:26 by mtran-nh          #+#    #+#             */
/*   Updated: 2025/07/12 15:46:59 by mtran-nh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*s;
	unsigned long	i;
	unsigned char	*p;

	s = malloc(count * size);
	if (count != 0 && size > (__SIZE_MAX__ / count))
		return (NULL);
	if (!s)
		return (NULL);
	i = 0;
	p = (unsigned char *)s;
	while (i < count * size)
	{
		p[i] = 0;
		i++;
	}
	return (s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int *p1 = ft_calloc(4, sizeof(int));
// 	int *p2 = ft_calloc(1, sizeof(int[4]));
// 	int *p3 = ft_calloc(4, sizeof *p3);

// 	if (p2)
// 	{
// 		for (int n = 0; n < 4; ++n) // print the array
// 			printf("p2[%d] == %d\n", n, p2[n]);
// 	}

// 	free(p1);
// 	free(p2);
// 	free(p3);
// }