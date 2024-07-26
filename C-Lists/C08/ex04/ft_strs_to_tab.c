/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:46:02 by root              #+#    #+#             */
/*   Updated: 2024/07/13 00:14:31 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int     ft_strlen(char *str)
{
    int     i;
    
    i = 0;
    while (str[i])
        i++;
    return(i);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int	i;

	i = 0;
	ptr =(char *)malloc(ft_strlen(src) + 1);
	if (!src)
		return (NULL);
	if (!ptr)
		return (NULL);
	while(src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *ptr;
	int		i;
	
	if(ac > 0 )
	{
		ptr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
		if(!ptr)
			return (NULL);
		while (i < ac)
		{
			ptr[i].size = ft_strlen(av[i]);
			ptr[i].str = av[i];
			ptr[i].copy = ft_strdup(av[i]);
			i++;
		}
	}
	ptr[i].size = 0;
	ptr[i].str = 0;
	ptr[i].copy = 0;
	return (ptr);
}

/*int		main(void)
{
	#include <stdio.h>
	
    char *strings[] = {"Hello", "World", "42", "School"};
    int ac = 4;
    int i;

    t_stock_str *array = ft_strs_to_tab(ac, strings);

    if (!array)
    {
        printf("Failed to allocate memory.\n");
        return 1;
    }

    i = 0;
    while (i < ac)
    {
        printf("Original: %s, Copy: %s, Size: %d\n", array[i].str, array[i].copy, array[i].size);
        i++;
    }

    i = 0;
    while (i < ac)
    {
        free(array[i].copy);
        i++;
    }
    free(array);

    return 0;
}*/