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

char *ft_strjoin(int size, char **strs, char *sep)
{
	int sep_len = 0;
	int first_str_len = 0;
	int t = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int f = 0;
	int total_lenght = 0;
	char *result;

	while(i < size)
	{	
		while (strs[i][j] != '\0')
		{
			j++;
		}
		total_lenght = total_lenght + j;
		i++;
		j = 0;
	}
	//printf("size = %d\n",total_lenght);

	sep_len = ft_strlen(sep);	

	result = (char *)malloc((total_lenght) * sizeof(char) + (sep_len * (size - 1)) * sizeof(char));
	i = 0;
	while (i < size)
	{
		while (strs[i][j] != '\0')
		{		
			while(i > 0 && (t < sep_len))
			{				
				result[k] = sep[t];
				t++;
				k++; //il problema e' qui k++
			}
			result[k] = strs[i][j];
			j++;
			k++;
			t = 0;
		}
		j = 0;
		i++;
	}
	result[k+1] = '\0';
	return result;
}

int main(void)
{
	char *separator = "!!!";
	char *matrice[] = {"123", "123", "123", "abc"};
	char *array = ft_strjoin(4, matrice,separator);
	
	printf("%s",array);	

	return 0;
}

