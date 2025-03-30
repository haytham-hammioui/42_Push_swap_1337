/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 06:29:41 by hhammiou          #+#    #+#             */
/*   Updated: 2025/03/28 21:54:23 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	sort_five(t_num **s_a, t_num **s_b)
{
	t_num	*min;

	set_pos(s_a);
	min = get_min(s_a);
	if (min->pos == 1)
	{
		while (*s_a != min)
			ft_rrotate(s_a, 1);
	}
	else
		while (*s_a != min)
			ft_rotate(s_a, 1);
	ft_push(s_a, s_b, 0);
	sort_four(s_a, s_b);
	ft_push(s_b, s_a, 1);
}
