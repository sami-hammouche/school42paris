/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samhammo <samhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 22:24:56 by samhammo          #+#    #+#             */
/*   Updated: 2026/11/05 22:42:01 by samhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;
	size_t	k
	char	**tab;

	*tab = malloc(sizeof(char *) * (s + 1))
	if (*tab == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c)
			i++;
		if (i > start)
		{
			k = 0;
			while (start < i)
				tab[j][k++] = s[start++];
			tab[j][k] = '\0';
			j++;
		}
		i++;
	}
	tab[j] = 0;
	return (tab);
}