/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:29:57 by hhammiou          #+#    #+#             */
/*   Updated: 2025/03/29 20:30:52 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	check_sign(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] == '+' || str[i] == '-') && (!(str[i + 1] >= '0' 
					&& str[i + 1] <= '9') || (i > 0 && str[i - 1] != ' ')))
			ft_msg_error();
		i++;
	}
}

void	ft_check(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 0;
	if (!str || !*str)
		ft_msg_error();
	while (str[i])
	{
		if (str[i] != ' ')
			check = 1;
		i++;
	}
	if (!check)
		ft_msg_error();
	check_sign(str);
}

void	check_args(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		ft_check(av[i]);
		while (av[i][j])
		{
			if ((!(av[i][j] >= '0' && av[i][j] <= '9') && av[i][j] != '+' 
				&& av[i][j] != '-' && av[i][j] != ' '))
				ft_msg_error();
			j++;
		}
		i++;
	}
}

int	ft_check_dup(t_num *stack_a)
{
	t_num	*i;

	while (stack_a->next)
	{
		i = stack_a->next;
		while (i)
		{
			if (stack_a->content == i->content)
				return (0);
			i = i->next;
		}
		stack_a = stack_a->next;
	}
	return (1);
}
