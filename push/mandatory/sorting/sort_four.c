/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 04:50:25 by hhammiou          #+#    #+#             */
/*   Updated: 2025/03/28 21:53:53 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	sort_four(t_num **s_a, t_num **s_b)
{
	t_num	*tmp;
	t_num	*min;

	tmp = *s_a;
	min = get_min(s_a);
	while (tmp != min)
	{
		ft_rotate(s_a, 1);
		tmp = *s_a;
	}
	ft_push(s_a, s_b, 0);
	sort_three(s_a);
	ft_push(s_b, s_a, 1);
}
