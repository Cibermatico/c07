#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
	{
		int	i;
		int	j;

		i = 0;
		j = 0;
		while (src[i] != '\0')
			{
				i++;
			}
		char *copy;
		copy = (char*)malloc(i * sizeof(char));
		while (j <= i)
		{
			copy[j] = src[j];
			j++;
		}
		copy[i] = '\0';
	return (copy);
	}

int main(void)
	{
		char *array = "ciao1";
		printf("%s", ft_strdup(array));
		return 0;
	}
