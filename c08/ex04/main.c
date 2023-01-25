/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:59:54 by lottavi           #+#    #+#             */
/*   Updated: 2022/12/07 19:00:47 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_str *par);

int					main(void)
{
	char	*strs[4];
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	int		size;

	str1 = "Bonjour";
	str2 = "les";
	str3 = "chacaux";
	str4 = "!";
	size = 4;
	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	strs[3] = str4;
	ft_show_tab(ft_strs_to_tab(size, strs));
}
