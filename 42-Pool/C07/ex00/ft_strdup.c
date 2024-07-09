#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return(i);
}


char	*ft_strdup(char *src)
{
	char	*ptr;
	int	i;

	i = 0;
	ptr =(char *)malloc(ft_strlen(src) + 1);
	if (!src)
		return (NULL);
	if (!ptr)
		return (NULL);
	while(src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*int	main(void)
{
	#include <stdio.h>

	char	*src = "ainda";
	char	*dest = ft_strdup(src);

	if (dest != NULL)
	{
		printf("String original: %s\n", src);
		printf("String duplicada: %s\n", dest);
		free(dest);
	}
	else
		printf("Erro ao duplicar a string.\n");
	return (0);
}*/
