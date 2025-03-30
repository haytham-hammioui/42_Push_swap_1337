/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 12:36:37 by hhammiou          #+#    #+#             */
/*   Updated: 2025/03/28 21:53:03 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	sort_two(t_num **s_a)
{
	int		num;
	t_num	*tmp;

	tmp = *s_a;
	num = tmp->content;
	tmp = tmp -> next;
	if (num > tmp-> content)
		ft_swap(s_a, 1);
}
