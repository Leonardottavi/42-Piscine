/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoviell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:37:08 by enoviell          #+#    #+#             */
/*   Updated: 2022/11/30 13:17:11 by enoviell         ###   ########.fr       */
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
