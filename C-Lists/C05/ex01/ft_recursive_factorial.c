/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:24:58 by root              #+#    #+#             */
/*   Updated: 2024/07/10 15:40:02 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	int		i;
	
	i = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (i > 0)
		nb *= ft_recursive_factorial(i - 1);
	return (nb);
}

/*int		main(void)
{
	#include <stdio.h>

	int		nb;
	
	nb = 5;
	printf("este é o fatorial de %i: %i", nb, ft_recursive_factorial(nb));
	return(0);
}*/