/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:35:36 by root              #+#    #+#             */
/*   Updated: 2024/07/09 14:38:51 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_strlen(char *str)
{
    int     i;
    
    i = 0;
    while (str[i])
        i++;
    return(i);
}

/*int     main(void)
{
    #include <stdio.h>

    char    str[] = "abcdef";
    printf("esta é a quantidade de caracteres: %i", ft_strlen(str));
    return (0);
}*/