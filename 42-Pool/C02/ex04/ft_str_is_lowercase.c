/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:49:51 by root              #+#    #+#             */
/*   Updated: 2024/07/09 15:53:56 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_str_is_lowercase(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
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
    printf("[1]contem apenas caracteres alpha minusculo\n[0]contem outros tipos de caracteres\nResultado: %i", ft_str_is_lowercase(str));
	return (0);
}*/