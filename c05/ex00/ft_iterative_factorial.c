/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:12:10 by lottavi           #+#    #+#             */
/*   Updated: 2022/11/29 19:14:03 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	if (nb <= 0)
		return (nb == 0);
	res = 1;
	i = 1;
	while (i <= nb)
		res *= i++;
	return (res);
}
