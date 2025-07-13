/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtran-nh <mtran-nh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 19:03:23 by mtran-nh          #+#    #+#             */
/*   Updated: 2025/07/06 19:09:26 by mtran-nh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 'a' - 'A';
		return (c);
	}
	return (c);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d", ft_toupper('A'));
// }