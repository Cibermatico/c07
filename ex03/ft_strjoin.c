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

char *ft_strjoin(int size, char **strs, char *sep)
{
	int sep_len = 0;
	int first_str_len = 0;
	int t = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	
	int total_lenght;
	char *result;

	sep_len = ft_strlen(sep);	
	result = (char *)malloc((ft_total_lenght(size,strs)) * sizeof(char) + (sep_len * (size - 1)) * sizeof(char));
	i = 0;
	while (i < size)
	{
		while (strs[i][j] != '\0')
		{		
			result[k] = strs[i][j];
			j++;
			k++;
			t = 0;			
		}
		while( (t < sep_len) && i < (size - 1))
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
	char *separator = "-->";
	char *matrice[] = {"Risolto", "sto", "cazzo", "di", "strjoin!"};
	char *array = ft_strjoin(5, matrice,separator);
	
	printf("%s",array);	

	return 0;
}
