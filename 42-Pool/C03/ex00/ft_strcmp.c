/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:27:26 by root              #+#    #+#             */
/*   Updated: 2024/07/09 17:53:49 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);	
	}
	return (0);
}

/*int		main(void)
{
	#include <stdio.h>

	char	s1[] = "anaa";
	char	s2[] = "anaaaa";
	
	printf("[0] se for iguais\n\
[-n] se s1 for menor que s2\n\
[+n] se s1 for maior que s2\n\
resultado: %i", ft_strcmp(s1, s2));
	return (0);
}*/