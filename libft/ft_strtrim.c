/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samhammo <samhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 21:45:30 by samhammo          #+#    #+#             */
/*   Updated: 2026/11/05 22:24:42 by samhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	d;
	size_t	f;

	d = 0;
	while (s1[d] && ft_strchr(set, s1[d]))
		d++;
	f = ft_strlen(s1);
	while (f > d && ft_strchr(set, s1[f - 1]))
		f--;
	return (ft_substr(s1, d, f - d));
}