/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:25:03 by root              #+#    #+#             */
/*   Updated: 2024/07/10 16:20:20 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if(power > 0)
		return(nb * ft_recursive_power(nb, power - 1));
}

/*int		main(void)
{
	#include <stdio.h>

	int		nb;
	int		power;
	
	nb = 2;
	power = 8;
	
	printf("essa é a potencia de %i elevado a %i: %i", nb, power, ft_recursive_power(nb, power));
	return (0);
}*/