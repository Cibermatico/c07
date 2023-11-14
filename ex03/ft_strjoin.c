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

char *ft_strjoin(int size, char **strs, char *sep)
{	
	int t;
	int i;
	int j;
	int k;
	char *result;

	silly_function(&i,&j,&t,&k);
	result = (char *)malloc((ft_total_lenght(size,strs)) * sizeof(char) + (ft_strlen(sep) * (size - 1)) * sizeof(char));	
	while (i < size)
	{
		while (strs[i][j] != '\0')
		{		
			result[k] = strs[i][j];
			j++;
			k++;
			t = 0;			
		}
		while( (t < ft_strlen(sep)) && i < (size - 1))
			{				
				result[k] = sep[t];     //carica il separatore 
				t++;
				k++; 
			}
		j = 0;
		i++;
	}
	result[k] = '\0';
	return result;
}

int main(void)
{
	char *separator = "--->";
	char *matrice[] = {"Norminette", "ti", "odio"};
	char *array = ft_strjoin(3, matrice,separator);
	
	printf("%s",array);	

	return 0;
}
