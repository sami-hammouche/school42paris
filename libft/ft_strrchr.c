/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samhammo <sami.hammouche@learner.42.tec    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 18:37:35 by samhammo          #+#    #+#             */
/*   Updated: 2026/11/05 10:46:47 by samhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int res;
    size_t  i;

    i = 0;
    res = -1;
    while (s[i])
    {
        if (s[i] == (char)c)
        {
            res = i;
        }
        i++;
    }
    if ((char)c == '\0')
        return ((char *)&s[i]);
    if (res == -1)
        return (NULL);
    return ((char *)&s[res]);
}