/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:25:07 by root              #+#    #+#             */
/*   Updated: 2024/07/10 18:09:36 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int		result;

	result = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (1);
	if (index > 0)
		result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (result);
}

/*int		main(void)
{
	#include <stdio.h>

	printf("este é o resultado:%i", ft_fibonacci(5));
	return (0);
}*/