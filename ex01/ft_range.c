/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:11:09 by lsquarci          #+#    #+#             */
/*   Updated: 2023/11/09 17:13:40 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int *ft_range(int min, int max)
{
	int *result;
	int delta;
	
	delta = max - min;
	result = (int*)malloc(delta * sizeof(int));
	delta = 0;

	if (min > max)
		{	
			return (0);
		}
	
	while (max > min)
	{
		result[delta] = min ;
		min ++;	
		delta++;			
	}
		return (result);
}
