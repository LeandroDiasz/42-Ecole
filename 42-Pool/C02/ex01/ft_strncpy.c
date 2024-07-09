/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:18:46 by root              #+#    #+#             */
/*   Updated: 2024/07/09 15:24:51 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int     i;

    i = 0;
    while (src[i] && i < n)
    {
        dest[i] = src[i];
        i++;        
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

/*int     main(void)
{
    #include <stdio.h>

    char    src[] = "string";
    char    dest[15];
    printf("string copiada: %s", ft_strncpy(dest, src, 4));
    return (0);
}*/