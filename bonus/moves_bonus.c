/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 13:27:10 by hhammiou          #+#    #+#             */
/*   Updated: 2025/03/30 15:22:54 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_bonus.h"

int	ft_swap(t_num **stack)
{
	t_num	*next;

	if ((*stack) && (*stack)->next)
	{
		next = (*stack)->next;
		(*stack)->next = next->next;
		next->next = (*stack);
		(*stack) = next;
	}
	return (1);
}

int	ft_push(t_num **stack1, t_num **stack2)
{
	t_num	*node;

	node = *stack1;
	if (*stack1)
	{
		*stack1 = (*stack1)->next;
		ft_lstadd_front(stack2, node);
	}
	return (1);
}

int	ft_rotate(t_num **stack)
{
	t_num	*last;

	if ((*stack) && (*stack)->next)
	{
		last = *stack;
		while (last->next)
			last = last->next;
		last->next = *stack;
		*stack = (*stack)->next;
		(last->next)->next = NULL;
	}
	return (1);
}

int	ft_rrotate(t_num **stack)
{
	t_num	*bef_last;

	if ((*stack) && (*stack)->next)
	{
		bef_last = *stack;
		while ((bef_last->next)->next)
			bef_last = bef_last->next;
		(bef_last->next)->next = *stack;
		*stack = bef_last->next;
		bef_last->next = NULL;
	}
	return (1);
}

void	ft_move(t_num **s_a, t_num **s_b, char *move)
{
	int	c;

	c = 0;
	if (!ft_strncmp(move, "sa\n", 3) || !ft_strncmp(move, "ss\n", 3))
		c = ft_swap(s_a);
	if (!ft_strncmp(move, "sb\n", 3) || !ft_strncmp(move, "ss\n", 3))
		c = ft_swap(s_b);
	if (!ft_strncmp(move, "pa\n", 3))
		c = ft_push(s_b, s_a);
	if (!ft_strncmp(move, "pb\n", 3))
		c = ft_push(s_a, s_b);
	if (!ft_strncmp(move, "ra\n", 3) || !ft_strncmp(move, "rr\n", 3))
		c = ft_rotate(s_a);
	if (!ft_strncmp(move, "rb\n", 3) || !ft_strncmp(move, "rr\n", 3))
		c = ft_rotate(s_b);
	if (!ft_strncmp(move, "rra\n", 4) || !ft_strncmp(move, "rrr\n", 4))
		c = ft_rrotate(s_a);
	if (!ft_strncmp(move, "rrb\n", 4) || !ft_strncmp(move, "rrr\n", 4))
		c = ft_rrotate(s_b);
	if (c == 0)
	{
		free(move);
		ft_clear(s_a, s_b);
		ft_msg_error();
	}
}
