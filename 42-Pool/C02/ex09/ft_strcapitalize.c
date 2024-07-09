/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:10:53 by root              #+#    #+#             */
/*   Updated: 2024/07/09 16:25:29 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		x;
	
	i = 0;
	while (str[i])
	{
		x = 0;
		while (str[i] >= 'a' && str[i] <= 'z'
					|| str[i] >= '0' && str[i] <= '9')
		{
			if (x == 0 && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
				i++;
				x = 1;
			}
			i++;
		}
		i++;
	}
	return (str);
}

/*int		main(void)
{
	#include <stdio.h>

	char	str[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	printf("este é o resultado:\n%s",ft_strcapitalize(str));
}*/