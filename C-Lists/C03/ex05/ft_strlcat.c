/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:27:38 by root              #+#    #+#             */
/*   Updated: 2024/07/10 00:22:28 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int     ft_strlen(char *str)
{
    unsigned int     i;
    
    i = 0;
    while (str[i])
        i++;
    return(i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dst_len;
	unsigned int	src_len;
	unsigned int	result;
	
	result = 0;
	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dst_len < size)
		result = dst_len + src_len;
	else
		result = size + src_len;
	i = 0;
	if (dst_len < size - 1)
		while(src[i] && (dst_len + i) < (size - 1))
		{
			dest[dst_len + i] = src[i];
			i++;
		}
		dest[dst_len + i] = '\0';
	return (result);
}

/*int	main(void) 
{
	#include <stdio.h>
	
    char dest[10] = "Hello";
    char src[] = " World!";
    unsigned int size = sizeof(dest);

    unsigned int result = ft_strlcat(dest, src, size);

    printf("String concatenada: %s\n", dest);
    printf("Comprimento total: %u\n", result);

    return (0);
}*/