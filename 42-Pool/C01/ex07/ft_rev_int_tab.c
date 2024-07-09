/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:39:17 by root              #+#    #+#             */
/*   Updated: 2024/07/09 15:02:21 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_rev_int_tab(int *tab, int size)
{
    int     i;
    int     temp;
    
    i = 0;
    while (i < size / 2)
    {
        temp = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = temp;
        i++;
    }
}

/*int     main(void)
{
    #include <stdio.h>
    
    int array[] = {1, 2, 3, 4, 5};
    int size = 5;
    
    ft_rev_int_tab(array, size);

    printf("Array invertido: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    
    printf("\n");
    return (0);
}*/