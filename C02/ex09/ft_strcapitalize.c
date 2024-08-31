/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chocobango <chocobango@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:41:53 by chocobango        #+#    #+#             */
/*   Updated: 2024/08/31 15:52:15 by chocobango       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alpha(char	str)
{
	if (!((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z')))
		return (0);
	else
		return (1);			
}

int	ft_is_numeric(char	str)
{
	if (!(str >= '0' && str <= '9'))
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;
	int	first;

	i = 0;
	first = 1;
	while (str[i] != '\0')
	{
		if (!(ft_is_alpha(str[i]) || ft_is_numeric(str[i])))
			first = 1;
		else
        {
			if (first)
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
					first = 0;
				}
		    else
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] = str[i] + 32;
            first = 0;
        }
		i++;
	}
}

/*#include <unistd.h>

int	main(void)
{
    char texto[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char *p = texto;

    ft_strcapitalize(p);
    write(1, p, 62);
    return (0);
}*/
