/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:22:20 by root              #+#    #+#             */
/*   Updated: 2024/07/09 14:27:03 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_ultimate_div_mod(int *a, int *b)
{
    int     div;
    int     mod;
    
    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
}

/*int     main(void)
{
    #include <stdio.h>

    int     a;
    int     b;

    a = 10;
    b = 5;
    ft_ultimate_div_mod(&a, &b);
    printf("divisão: %i\nmodulo: %i", a, b);
    return (0);
}*/