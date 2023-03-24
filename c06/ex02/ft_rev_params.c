/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:27:47 by lottavi           #+#    #+#             */
/*   Updated: 2023/03/24 13:28:05 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
