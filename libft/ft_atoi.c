/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samhammo <sami.hammouche@learner.42.tec    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 17:23:10 by samhammo          #+#    #+#             */
/*   Updated: 2026/11/05 10:46:18 by samhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
    size_t  i;
    int signe;
    int res;

    i = 0;
    signe = 1;
    res = 0;
    while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
        i++;
    if (nptr[i] == '+' || nptr[i] == '-')
    {
        if (nptr[i] == '-')
            signe = -1;
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        res = res * 10 + (nptr[i] - '0');
        i++;
    }
    return (res * signe);
}