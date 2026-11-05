/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samhammo <ssamhammo@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 14:41:45 by samhammo          #+#    #+#             */
/*   Updated: 2026/11/05 15:56:09 by samhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	start = i;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i] == little[j] && i < len && little[j] != '\0')
		{
			i++;
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[start]);
		i = start;
		i++;
		start = i;
	}
	return (NULL);
}
