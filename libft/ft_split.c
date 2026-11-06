/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samhammo <samhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 22:24:56 by samhammo          #+#    #+#             */
/*   Updated: 2026/11/06 21:43:41 by samhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *str, char c)
{
	size_t	i;
	int		count_w;

	i = 0;
	count_w = 0;
	while (str[i])
	{
		if ((str[i] != c) && (i == 0 || str[i - 1] == c))
			count_w++;
		i++;
	}
	return (count_w);
}

static int	add_word(char **tab, size_t j, char const *s, size_t len)
{
	size_t	k;

	tab[j] = malloc(sizeof(char) * (len + 1));
	if (!tab[j])
	{
		while (j > 0)
		{
			j--;
			free(tab[j]);
		}
		free(tab);
		return (0);
	}
	k = 0;
	while (k < len)
	{
		tab[j][k] = s[k];
		k++;
	}
	tab[j][k] = '\0';
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;
	char	**tab;

	tab = ft_calloc(word_count(s, c) + 1, sizeof(char *));
	if (tab == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i > start)
		{
			if (!add_word(tab, j, &s[start], i - start))
				return (NULL);
			j++;
		}
	}
	return (tab);
}
