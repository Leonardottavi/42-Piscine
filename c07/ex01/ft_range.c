/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:37:04 by lottavi           #+#    #+#             */
/*   Updated: 2022/12/07 18:44:06 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	array = (int *)malloc((max - min) * sizeof(int));
	if (array == 0)
	{
		return (0);
	}
	while (min + i < max)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
