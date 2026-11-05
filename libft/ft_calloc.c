/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samhammo <samhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 17:23:21 by samhammo          #+#    #+#             */
/*   Updated: 2026/11/05 17:58:27 by samhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tab;
	size_t			i;

	i = 0;
	tab = malloc(nmemb * size);
	if (!tab)
		return (NULL);
	while (i < (nmemb * size))
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}
