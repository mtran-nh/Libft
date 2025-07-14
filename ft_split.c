/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtran-nh <mtran-nh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 20:12:29 by mtran-nh          #+#    #+#             */
/*   Updated: 2025/07/14 22:01:15 by mtran-nh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_of_word(char const *s, char c)
{
	int	nb;
	int	i;

	i = 0;
	nb = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			nb++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (nb);
}

static int	number_of_char(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static char	*write_word(char const *s, char c)
{
	int		len;
	char	*word;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	len = 0;
	while (s[len] != c && s[len])
	{
		word[len] = s[len];
		len++;
	}
	word[len] = '\0';
	return (word);
}

static void	free_all(char **res, int word)
{
	while (word--)
		free(res[word]);
	free(res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		word;

	i = 0;
	word = 0;
	res = malloc(sizeof(char *) * (number_of_word(s, c) + 1));
	if (!s || !res)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			res[word] = write_word(&s[i], c);
			if (!res[word])
				return (free_all(res, word), NULL);
			word++;
			i += number_of_char(&s[i], c);
		}
	}
	res[word] = NULL;
	return (res);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	**result;
// 	char	s[] = "lorem ipsum dolor sit amet";

// 	int		i;
// 	int		j;

// 	i = 0;
// 	j = 0;
// 	result = ft_split(s, ' ');
// 	printf("%d\n", number_of_word(s, ' '));

// 	// while (s[i])
// 	// {
// 	// 	while(s[i] == ' ')
// 	// 		i++;
// 	// 	if (s[i])
// 	// 	{
// 	// 		printf("%d\n", number_of_char(&s[i], ' '));
// 	// 		printf("%s\n", write_word(&s[i], ' '));
// 	// 		i += number_of_char(&s[i], ' ');
// 	// 	}
// 	// }
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("%s\n", result[i++]);
// 	}
// }
