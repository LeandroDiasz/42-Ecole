/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 01:26:25 by root              #+#    #+#             */
/*   Updated: 2024/07/09 01:27:02 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c, 1);
}

void    ft_print_reverse_alphabet(void)
{
    char    alpha;
    alpha = 'z';
    while(alpha >= 'a')
    {
        ft_putchar(alpha);
        alpha--;
    }
}

int     main(void)
{
    ft_print_reverse_alphabet();
}