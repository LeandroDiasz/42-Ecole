/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:36:54 by root              #+#    #+#             */
/*   Updated: 2024/07/09 15:53:28 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_str_is_numeric(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
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
    printf("[1]contem apenas caracteres numericos\n[0]contem outros tipos de caracteres\nResultado: %i", ft_str_is_numeric(str));
    return (0);
}*/