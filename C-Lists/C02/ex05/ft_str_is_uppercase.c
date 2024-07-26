/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:51:49 by root              #+#    #+#             */
/*   Updated: 2024/07/09 15:56:02 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            i++;
        else
            return (0);
    }
    return (1);
}

/*int     main(void)
{
    #include <stdio.h>

    char    str[] = "121321";
    printf("[1]contem apenas caracteres alpha maiusculos\n[0]contem outros tipos de caracteres\nResultado: %i", ft_str_is_uppercase(str));
	return (0);
}*/