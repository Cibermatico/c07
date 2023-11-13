/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:07:45 by lsquarci          #+#    #+#             */
/*   Updated: 2023/11/12 18:45:02 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*result;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	result = (int *)malloc(sizeof(int) * (size));
	if (result == NULL)
		return (-1);
	*range = result;
	size = 0;
	while (max > min)
	{
		result[size] = min;
		min++;
		size++;
	}
	return (size);
}
