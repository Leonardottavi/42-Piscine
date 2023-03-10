/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:16:38 by lottavi           #+#    #+#             */
/*   Updated: 2022/11/30 16:38:35 by lottavi          ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;
	int	sq;

	if (nb <= 2)
		return (2);
	sq = my_sqrt((long)nb);
	i = 2;
	while (i <= sq)
	{
		if (nb % i++ == 0)
			return (ft_find_next_prime(nb + 1));
	}
	return (nb);
}
