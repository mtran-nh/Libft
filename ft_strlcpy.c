/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtran-nh <mtran-nh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:08:45 by mtran-nh          #+#    #+#             */
/*   Updated: 2025/07/10 20:17:24 by mtran-nh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
// #include <stdio.h>

// int main(void)
// {
// 	char	dest[20] = "hellohello";
// 	const char	src[10] = "hihihi";
// 	size_t	result = ft_strlcpy(dest,src,13);
// 	printf("%zu\n",result);
// 	printf("%s\n",dest);
// }