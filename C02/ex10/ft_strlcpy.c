/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chocobango <chocobango@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:04:28 by chocobango        #+#    #+#             */
/*   Updated: 2024/09/01 16:56:26 by chocobango       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    ft_strlcpy(char *dest, char *str, unsigned int  size)
{
    unsigned int    i;

    i = 0;
    while (str[i] != '\0')
    {
        if (i < size)
            dest[i] = str[i];
        else if (i = size)
            dest[i] = '\0';
        i++;
    }
    return (i);
}

#include <unistd.h>

int main(void)
{
    char dest[8];
    char    *p = dest;
    int copiados;
    copiados = ft_strlcpy(p, "abcabcabcabc", 8);
    write(1, p, 8);
    return (0);
}