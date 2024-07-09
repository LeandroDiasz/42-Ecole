/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:15:49 by root              #+#    #+#             */
/*   Updated: 2024/07/09 14:27:06 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

/*int     main(void)
{
    #include <stdio.h>

    int     a;
    int     b;
    int     div;
    int     mod;
    
    a = 10;
    b = 5;
    div = 0;
    mod = 0;
    ft_div_mod(a, b, &div, &mod);
    printf("divisão: %i\nmodulo: %i", div, mod);
    return (0);
}*/