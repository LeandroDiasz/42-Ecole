/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:25:11 by root              #+#    #+#             */
/*   Updated: 2024/07/10 18:13:52 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		s_root;

	s_root = 0;
	while (s_root <= nb)
	{
		if((s_root * s_root) == nb)
			return (s_root);
		s_root++;
	}
	return (0);
}

/*int		main(void)
{
	#include <stdio.h>
	
	printf("essa é a raíz quadrada:%i",ft_sqrt(15));	
}*/