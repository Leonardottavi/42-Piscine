/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoviell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:53:14 by enoviell          #+#    #+#             */
/*   Updated: 2022/11/30 16:09:54 by enoviell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	while (av[0][i] != '\0' && ac)
	{
		write(1, &av[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
