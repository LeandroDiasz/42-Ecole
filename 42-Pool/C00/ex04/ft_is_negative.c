/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 01:35:37 by root              #+#    #+#             */
/*   Updated: 2024/07/09 01:41:17 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c, 1);
}

void    ft_is_negative(int n)
{
    char    p;
    p = 'P';
    if(!(n >= 0))
        return(ft_putchar('N'));
    ft_putchar(p);
}

/*int     main(void)
{
    ft_is_negative(0);
}*\