/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:18:09 by root              #+#    #+#             */
/*   Updated: 2024/07/10 18:19:56 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;
	
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);

}

int	calc_length(int size, char **strs, char *sep)
{
	int	total_l;
	int	sep_l;
	int	i;

	total_l = 0;
	sep_l = ft_strlen(sep);
	i = 0;
	while (i < size)
	{
		total_l += ft_strlen(strs[i]);
		if( i < size - 1)
			total_l += sep_l;
		i++;
	}
	total_l += 1;
	return (total_l);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int	i;
	int	total_l;

	if (size == 0)
	{
		ptr = malloc(sizeof(char));
		*ptr = 0;
		return (ptr);
	}
	total_l = calc_length(size, strs, sep);
	ptr = (char *)malloc(total_l * sizeof(char));
	i = 0;
	if(!ptr)
		return (NULL);
	ptr[0] = '\0';
	while (i < size)
	{
		ft_strcat(ptr, strs[i]);
		if (i < size - 1)
			ft_strcat(ptr, sep);
		i++;
	}
	return (ptr);
}

/*int		main(void) 
{
	#include <stdio.h>
	
	char *strs[] = {"testando", "o", "codigo", ":)"};
	char *sep = "  ";
	int size = 3;
	char *result;
	
	result = ft_strjoin(size, strs, sep);
	if (result != NULL) 
	{
		printf("Resultado: %s\n", result);
		free(result);
	} 
	else 
	{
		printf("Erro ao alocar memória\n");
	}
	return 0;
}*/