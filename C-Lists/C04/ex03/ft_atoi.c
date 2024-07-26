/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 00:43:05 by root              #+#    #+#             */
/*   Updated: 2024/07/10 14:57:40 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		i;
	int		imp;
	int		result;

	result = 0;
	i = 0;
	imp = 1;
	while(str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
				|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
				i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			imp *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * imp);
}

/*int		main(void)
{
	#include <stdio.h>
	
	printf("este é o resultado: %i", ft_atoi(" ---+--+1234ab567"));
	return (0);
}*/