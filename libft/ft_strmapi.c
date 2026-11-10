/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samhammo <samhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 21:11:37 by samhammo          #+#    #+#             */
/*   Updated: 2026/11/10 14:59:03 by samhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*t;

	i = 0;
	t = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!t)
		return (NULL);
	while (s[i] != '\0')
	{
		t[i] = (*f)(i, s[i]);
		i++;
	}
	t[i] = '\0';
	return (t);
}
