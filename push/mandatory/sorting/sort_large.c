/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 21:29:06 by hhammiou          #+#    #+#             */
/*   Updated: 2025/03/29 20:41:35 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_back_push(t_num **s_a, t_num **s_b)
{
	t_num	*res;

	set_pos(s_b);
	res = get_max(s_b);
	if (res->pos == 0)
	{
		while (res != *s_b)
			ft_rotate(s_b, 0);
	}
	else
		while (res != *s_b)
			ft_rrotate((s_b), 0);
	ft_push(s_b, s_a, 1);
}

void	ft_algo(t_num **s_a, t_num **s_b, int min, int max)
{
	int	index;

	while (*s_a)
	{
		index = (*s_a)->index;
		if (index >= min && index <= max)
		{
			ft_push(s_a, s_b, 0);
			min++;
			max++;
		}
		else if (index < min)
		{
			ft_push(s_a, s_b, 0);
			ft_rotate(s_b, 0);
			min++;
			max++;
		}
		else if (index > max)
			ft_rotate(s_a, 1);
	}
}

void	sort_large(t_num **s_a, t_num **s_b)
{
	int	min;
	int	max;

	min = 0;
	max = ft_lstsize2(s_a) * 0.05 + 10;
	ft_algo(s_a, s_b, min, max);
	while (*s_b)
		ft_back_push(s_a, s_b);
}
