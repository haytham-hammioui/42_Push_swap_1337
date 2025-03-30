/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:31:22 by hhammiou          #+#    #+#             */
/*   Updated: 2025/03/29 20:38:41 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_msg_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	ft_free(char ***strs)
{
	int	i;

	i = 0;
	if (!strs || !*strs)
		return ;
	while ((*strs)[i])
	{
		free((*strs)[i]);
		i++;
	}
	free(*strs);
	*strs = NULL;
}

void	ft_index_nums(t_num *stack_a)
{
	t_num	*curr;
	t_num	*comp;
	int		index;

	curr = stack_a;
	while (curr)
	{
		index = 0;
		comp = stack_a;
		while (comp)
		{
			if (curr->content > comp->content)
				index++;
			comp = comp->next;
		}
		curr->index = index;
		curr = curr->next;
	}
}

void	ft_check_sorted(t_num *s_a)
{
	int	flag;

	flag = 0;
	while (s_a->next)
	{
		if (s_a->content > s_a->next->content)
			flag = 1;
		s_a = s_a->next;
	}
	if (!flag)
	{
		ft_lstclear(&s_a);
		exit(0);
	}
}
