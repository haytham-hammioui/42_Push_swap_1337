/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 06:19:20 by hhammiou          #+#    #+#             */
/*   Updated: 2025/03/29 20:38:45 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_num	*get_max(t_num **s)
{
	t_num	*tmp;
	t_num	*res;
	int		max;

	tmp = *s;
	res = tmp;
	max = tmp->content;
	while (tmp)
	{
		if (tmp->content > max)
		{
			res = tmp;
			max = tmp->content;
		}
		tmp = tmp->next;
	}
	return (res);
}

t_num	*get_min(t_num **s)
{
	t_num	*tmp;
	t_num	*res;
	int		min;

	tmp = *s;
	res = tmp;
	min = tmp->content;
	while (tmp)
	{
		if (tmp->content < min)
		{
			res = tmp;
			min = tmp->content;
		}
		tmp = tmp->next;
	}
	return (res);
}

void	set_pos(t_num **s)
{
	t_num	*tmp;
	int		i;
	int		size;

	tmp = *s;
	i = 0;
	size = ft_lstsize2(s);
	while (tmp)
	{
		if (i <= size / 2)
			tmp->pos = 0;
		else
			tmp->pos = 1;
		tmp = tmp->next;
		i++;
	}
}
