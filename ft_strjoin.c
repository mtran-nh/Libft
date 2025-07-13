/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtran-nh <mtran-nh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:45:26 by mtran-nh          #+#    #+#             */
/*   Updated: 2025/07/12 15:54:35 by mtran-nh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	i;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	newstr = malloc((len1 + len2 + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	i = 0;
	while (i < (len1 + len2))
	{
		if (i < len1)
			newstr[i] = s1[i];
		if (i >= len1)
			newstr[i] = s2[i - len1];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
// #include <stdio.h>
// int main()
// {
// 	char s1[] = "Hello";
// 	char s2[] = "World";
// 	printf("%s", ft_strjoin(s1, s2));
// }