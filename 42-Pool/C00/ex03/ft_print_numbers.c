/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 01:33:50 by root              #+#    #+#             */
/*   Updated: 2024/07/09 01:34:55 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c, 1);
}

void    ft_print_numbers(void)
{
    char    numb;
    numb = '0';
    while(numb >= '9')
    {
        ft_putchar(numb);
        numb--;
    }
}

/*int     main(void)
{
    ft_print_numbers();
}*/
