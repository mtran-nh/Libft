/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtran-nh <mtran-nh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 18:13:06 by mtran-nh          #+#    #+#             */
/*   Updated: 2025/07/10 20:17:13 by mtran-nh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (src[i] && (dst_len + i) < (dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// #include <stdio.h>

// int main(void)
// {
// 	char	dest[20] = "hellohello";
// 	const char	src[10] = "hihihi";
// 	size_t	result = ft_strlcat(dest,src,13);
// 	printf("%zu\n",result);
// 	printf("%s\n",dest);
// }
