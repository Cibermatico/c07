/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:00:39 by lsquarci          #+#    #+#             */
/*   Updated: 2023/11/12 18:43:14 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	dim;

	if (max <= min)
		return (NULL);
	dim = max - min;
	result = (int *)malloc((dim) * sizeof(int));
	dim = 0;
	while (min < max)
	{
		result[dim] = min;
		dim++;
		min++;
	}
	return (result);
}
