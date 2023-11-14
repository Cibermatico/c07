#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

int ft_total_lenght(int size, char **ptr)
{
	int i;
	int j;
	int total_lenght;

	i = 0;
	j = 0;
	total_lenght = 0;
	while(i < size)
	{	
		while (ptr[i][j] != '\0')
		{
			j++;
		}
		total_lenght = total_lenght + j;
		i++;
		j = 0;
	}
	return total_lenght;
} 

void silly_function(int *a, int *b, int *c, int *d)
{
	*a = 0;
	*b = 0;
	*c = 0;
	*d = 0;
}
void main_function(int size, char **matrix, char *s, char *output)
{	
	int t;
	int i;
	int j;
	int k;
	
	silly_function(&i,&j,&t,&k);
	while (i < size)
	{
		while (matrix[i][j] != '\0')
		{		
			output[k] = matrix[i][j];
			j++;
			k++;						
		}
		t = 0;
		while( (t < ft_strlen(s)) && i < (size - 1))
			{				
				output[k] = s[t];
				t++;
				k++; 
			}
		j = 0;
		i++;
	}
}

char *ft_strjoin(int size, char **strs, char *sep)
{	
	char *result;
	
	if (size == 0)
		{
			result = (char *)malloc(sizeof(char));
			*result = '\0';
			return result;
		}
	result = (char *)malloc((ft_total_lenght(size,strs)) * sizeof(char)
			+ (ft_strlen(sep) * (size - 1)) * sizeof(char));	
	if (result == NULL)
		return 0;
	
	main_function(size, strs, sep, result);
	return result;
}

/*int main(void)
{
	char *separator = "---------->";
	char *matrice[] = {"Norminette", "ti", "odio"};
	char *array = ft_strjoin(3, matrice,separator);
	
	printf("%s",array);	

	return 0;
}*/
