/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:10:56 by root              #+#    #+#             */
/*   Updated: 2024/07/09 15:52:41 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcpy(char *dest, char *src)
{
    int     i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;        
    }
    dest[i] = '\0';
    return (dest);
}

/*int     main(void)
{
    #include <stdio.h>

    char    src[] = "string";
    char    dest[7];
    printf("string copiada: %s", ft_strcpy(dest, src));
    return (0);
}*/