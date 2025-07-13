/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtran-nh <mtran-nh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:21:46 by mtran-nh          #+#    #+#             */
/*   Updated: 2025/07/12 21:48:02 by mtran-nh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkset(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && checkset(s1[start], set))
		start++;
	while (end > start && checkset(s1[end - 1], set))
		end--;
	if (start == end)
		return (ft_strdup(""));
	str = malloc(end - start + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, &s1[start], end - start);
	str[end - start] = '\0';
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s1[] = "..,,//jhfhjjjjj...hhhh..//";
// 	char	set[] = ".,/";

// 	printf("%s", ft_strtrim(s1, set));
// }