/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoviell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:21:36 by enoviell          #+#    #+#             */
/*   Updated: 2022/11/30 13:18:42 by enoviell         ###   ########.fr       */
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

	l = ac -1 ;
	while (l > 0)
	{
		i = 0;
		while (av[l][i] != '\0')
		{
			ft_putchar(av[l][i]);
			i++;
		}
		ft_putchar('\n');
		l--;
	}
	return (0);
}
