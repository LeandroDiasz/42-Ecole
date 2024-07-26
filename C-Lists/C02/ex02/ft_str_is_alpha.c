/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:28:19 by root              #+#    #+#             */
/*   Updated: 2024/07/09 15:53:12 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_str_is_alpha(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z'
                    || str[i] >= 'A' && str[i] <= 'Z')
            i++;
        else
            return (0);
    }
    return (1);
}

/*int     main(void)
{
    #include <stdio.h>

    char    str[] = "aAAAA1Ainda";
    printf("[1]contem apenas caracteres alpha\n[0]contem outros tipos de caracteres\nResultado: %i", ft_str_is_alpha(str));
    return (0);
}*/