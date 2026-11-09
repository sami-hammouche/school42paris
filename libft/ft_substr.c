/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samhammo <samhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 21:45:42 by samhammo          #+#    #+#             */
/*   Updated: 2026/11/05 21:45:42 by samhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t	i;
    size_t	size;
    char	*t;

    i = 0;
    size = ft_strlen(s);
	if (start >= size)
	{
		t = malloc(sizeof(char));
		if (!t)
			return (NULL);
		t[0] = '\0';
		return (t);
	}
	if (len > (size - start))
		len = size - start;
	t = malloc(len + 1);
	if (!t)
		return (NULL);
	while (i < len)
		t[i++] = s[start++];
	t[i] = '\0';
	return (t);
}