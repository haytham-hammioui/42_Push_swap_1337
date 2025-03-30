/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:40:31 by hhammiou          #+#    #+#             */
/*   Updated: 2025/03/29 17:20:51 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_swap(t_num **stack, int flag)
{
	t_num	*next;

	if ((*stack) && (*stack)->next)
	{
		next = (*stack)->next;
		(*stack)->next = next->next;
		next->next = (*stack);
		(*stack) = next;
	}
	if (flag == 1)
		write(1, "sa\n", 3);
	else
		write(1, "sb\n", 3);
}

void	ft_push(t_num **stack1, t_num **stack2, int flag)
{
	t_num	*node;

	node = *stack1;
	if (*stack1)
	{
		*stack1 = (*stack1)->next;
		ft_lstadd_front(stack2, node);
	}
	if (flag == 1)
		write(1, "pa\n", 3);
	else
		write(1, "pb\n", 3);
}

void	ft_rotate(t_num **stack, int flag)
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
	if (flag == 1)
		write(1, "ra\n", 3);
	else
		write(1, "rb\n", 3);
}

void	ft_rrotate(t_num **stack, int flag)
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
	if (flag == 1)
		write(1, "rra\n", 4);
	else
		write(1, "rrb\n", 4);
}
