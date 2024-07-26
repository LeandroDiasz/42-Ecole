/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:03:15 by root              #+#    #+#             */
/*   Updated: 2024/07/09 16:08:50 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
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
	
	char	str[] = "ainda";
	printf("Essa é a string transformada: %s", ft_strupcase(str));
}