#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	if (!*range)
		return (-1);
	while(i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

/*#include <stdio.h>

int	main(void)
{
	int	*ptr;
	int	size;
	int	i;

	i = 0;
	size = ft_ultimate_range(&ptr, 0, 1000000);
	
	if (size == -1) 
		printf("Erro na alocação de memória\n");
	else if (size == 0)
		printf("min é maior ou igual a max, range aponta para NULL\n");
	else
	{
		printf("Tamanho do range: %d\n", size);
		printf("Valores do range:\n");
        	while(i < size)
		{
			printf("%d ", ptr[i]);
			i++;
		}
		printf("\n");
		free(ptr);
	}
	 return (0);
}*/
