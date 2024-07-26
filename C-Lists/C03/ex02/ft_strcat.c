/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:27:30 by root              #+#    #+#             */
/*   Updated: 2024/07/09 17:58:58 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);	
}

/*int		main(void)
{
	#include <stdio.h>

	char	dest[] = "vai ";
	char	src[] = "flamengo!";
	printf("este é o resultado:\n%s", ft_strcat(dest, src));
	return (0);
}*/