/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:24:55 by root              #+#    #+#             */
/*   Updated: 2024/07/10 15:32:46 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;
	
	i = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i > 0)
	{
		nb *= i;
		i--;
	}
	return (nb);
}

int		main(void)
{
	#include <stdio.h>

	int		nb;
	
	nb = 0;
	printf("este é o fatorial de %i: %i", nb, ft_iterative_factorial(nb));
	return(0);
}