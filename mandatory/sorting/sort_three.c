/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 14:31:01 by hhammiou          #+#    #+#             */
/*   Updated: 2025/03/28 21:53:19 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	sort_three(t_num **s_a)
{
	t_num	*tmp;

	tmp = get_max(s_a);
	if (tmp == *s_a)
		ft_rotate(s_a, 1);
	else if (tmp == (*s_a)->next)
		ft_rrotate(s_a, 1);
	if ((*s_a)->content > (*s_a)->next->content)
		ft_swap(s_a, 1);
}
