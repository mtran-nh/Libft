/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtran-nh <mtran-nh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 18:45:02 by mtran-nh          #+#    #+#             */
/*   Updated: 2025/07/14 21:40:20 by mtran-nh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c += 'A' - 'a';
		return (c);
	}
	return (c);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d", ft_toupper('a'));
// }