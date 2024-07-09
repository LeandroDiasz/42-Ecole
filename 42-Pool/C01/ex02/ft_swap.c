/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:11:45 by root              #+#    #+#             */
/*   Updated: 2024/07/09 14:27:12 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_swap(int *a, int *b)
{
    int     swp;
    swp = *a;
    *a = *b;
    *b = swp;
}

/*int     main(void)
{
    #include <stdio.h>
    
    int     a;
    int     b;

    a = 5;
    b = 10;
    ft_swap(&a, &b);
    printf("valor de a: %i\nvalor de b: %i", a, b);
    return (0);
}*/