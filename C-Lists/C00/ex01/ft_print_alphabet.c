/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 01:24:54 by root              #+#    #+#             */
/*   Updated: 2024/07/09 01:25:44 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c, 1);
}

void    ft_print_alphabet(void)
{
    char    alpha;
    alpha = 'a';
    while(alpha <= 'z')
    {
        ft_putchar(alpha);
        alpha++;
    }
}

/*int     main(void)
{
    ft_print_alphabet();
}*/
