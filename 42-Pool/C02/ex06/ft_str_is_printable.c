/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:55:37 by root              #+#    #+#             */
/*   Updated: 2024/07/09 15:57:17 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 32 && str[i] <= 126)
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
    printf("[1]contem apenas caracteres alpha maiusculos\n[0]contem outros tipos de caracteres\nResultado: %i", ft_str_is_printable(str));
	return (0);
}*/