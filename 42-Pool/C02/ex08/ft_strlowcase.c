/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:09:46 by root              #+#    #+#             */
/*   Updated: 2024/07/09 16:10:18 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			i++;
		}
        else
			i++;
    }
	return(str);
}

int		main(void)
{
	#include <stdio.h>
	
	char	str[] = "AINDA";
	printf("Essa é a string transformada: %s", ft_strlowcase(str));
}