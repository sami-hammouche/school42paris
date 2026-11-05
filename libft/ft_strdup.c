/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samhammo <samhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 16:39:09 by samhammo          #+#    #+#             */
/*   Updated: 2026/11/05 17:57:52 by samhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*t;

	i = 0;
	while (s[i])
	{
		i++;
	}
	t = malloc(sizeof(char) * (i + 1));
	if (t == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		t[i] = s[i];
		i++;
	}
	t[i] = '\0';
	return (t);
}
