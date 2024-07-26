/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 00:29:43 by root              #+#    #+#             */
/*   Updated: 2024/07/10 00:29:45 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str)
{
    int     i;
    
    i = 0;
    while (str[i])
        i++;
    write(1, str, i);
}

/*int     main(void)
{
    char    str[] = "string copiado";
    ft_putstr(str);
    return (0);
}*/