/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:25:00 by root              #+#    #+#             */
/*   Updated: 2024/07/10 16:14:15 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		result;
	int		i;

	i = power;
	result = 1;
	if (power < 0)
		return (0);
	while (i > 0)
	{
		result *= nb;
		i--;
	}
	return (result);
}

/*int		main(void)
{
	#include <stdio.h>

	int		nb;
	int		power;
	
	nb = 2;
	power = 8;
	
	printf("essa é a potencia de %i elevado a %i: %i", nb, power, ft_iterative_power(nb, power));
	return (0);
}*/