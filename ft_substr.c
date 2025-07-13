/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtran-nh <mtran-nh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:24:06 by mtran-nh          #+#    #+#             */
/*   Updated: 2025/07/12 20:41:40 by mtran-nh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	size_s;

	if (!s)
		return (NULL);
	size_s = ft_strlen(s);
	if (len > size_s - start)
		len = size_s - start;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (s[i + start] && i < len)
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// #include <stdio.h>
// int main()
// {
// 	char s[] = "good morning my friend";
// 	printf("%s", ft_substr(s, 5, 7));
// }
	// them vao truoc malloc de viet lai len
	// if (start >= ft_strlen(s))
	// 	return (ft_strdup(""));
	// them vao truoc malloc de tranh gap van de voi free khi test