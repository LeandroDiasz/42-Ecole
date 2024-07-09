#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;
	int	size;

	if (min >= max)
		return (NULL);
	i = 0;
	size = max - min;
	ptr = (int *)malloc(size * sizeof(int));
	if (!ptr)
		return (NULL);
	while(i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}

/*#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*ptr;
	int	i;

	i = 0;
	min = 10;
	max = 20;
	ptr = ft_range(min, max);

	if (!ptr)
		printf("Erro: não foi possível criar o intervalo [%d, %d)\n", min, max);
	else
	{
		printf("Intervalo [%d, %d):\n", min, max);
		while (i < (max - min))
		{
			printf("%d ", ptr[i]);
			i++;
		}
		printf("\n");
		free(ptr);
	}
	return (0);
}*/
