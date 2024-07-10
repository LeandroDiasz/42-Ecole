/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:27:40 by root              #+#    #+#             */
/*   Updated: 2024/07/10 00:22:43 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	
	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			++j;
		}
		++i;
	}
	return (0);
}

/*int		main(void)
{
	#include <stdio.h>
	#include <string.h>
 
    char s1[] = "GforGeeksforGeekslalalalla";
    char s2[] = "Ge";
    char* p;
 
    p = ft_strstr(s1, s2);
 
    if (p) {
        printf("String found\n");
        printf("First occurrence of string '%s' in '%s' is "
               "'%s'",
               s2, s1, p);
    }
    else
        printf("String not found\n");
 
    return (0);
}*/