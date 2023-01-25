/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:16:13 by lottavi           #+#    #+#             */
/*   Updated: 2022/11/30 16:38:26 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	my_sqrt(long nb)
{
	long	sq;

	sq = 0;
	while ((sq + 1) * (sq + 1) <= nb)
		sq++;
	return ((int)sq);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sq;

	if (nb <= 1)
		return (0);
	sq = my_sqrt((long)nb);
	i = 2;
	while (i <= sq)
	{
		if (nb % i++ == 0)
			return (0);
	}
	return (1);
}
