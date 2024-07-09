#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *src);
char	*ft_strcat(char *dest, char *src);
char	*ft_strjoin(int size, char **strs, char *sep);
int	calc_length(int size, char **strs, char *sep);

int main() 
{
	char *strs[] = {"ainda", "caralho", "vamo", "porra"};
	char *sep = ", , ";
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
}
