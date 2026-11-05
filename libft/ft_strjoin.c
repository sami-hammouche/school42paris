/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samhammo <samhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 16:47:12 by samhammo          #+#    #+#             */
/*   Updated: 2026/11/05 17:48:19 by samhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	*t;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	t = malloc(sizeof(char) * (size));
	if (!t)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		t[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		t[i++] = s2[j++];
	t[i] = '\0';
	return (t);
}
