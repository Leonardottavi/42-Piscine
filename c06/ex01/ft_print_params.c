/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:28:25 by lottavi           #+#    #+#             */
/*   Updated: 2023/03/24 13:28:27 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	l;

	l = 1;
	while (l < ac)
	{
		i = 0;
		while (av[l][i] != '\0')
		{
			ft_putchar(av[l][i]);
			i++;
		}
		ft_putchar('\n');
		l++;
	}
	return (0);
}
