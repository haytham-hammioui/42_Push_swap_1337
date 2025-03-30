/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:12:14 by hhammiou          #+#    #+#             */
/*   Updated: 2025/03/29 20:37:05 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_sort(t_num **s_a, t_num **s_b, int size)
{
	if (size == 2)
		sort_two(s_a);
	else if (size == 3)
		sort_three(s_a);
	else if (size == 4)
		sort_four(s_a, s_b);
	else if (size == 5)
		sort_five(s_a, s_b);
	else if (size > 5)
		sort_large(s_a, s_b);
}

int	main(int ac, char **av)
{
	t_num	*stack_a;
	t_num	*stack_b;

	stack_b = NULL;
	if (ac == 1)
		exit(0);
	check_args(ac, av);
	stack_a = lstnum(ac, av);
	if (!stack_a || !ft_check_dup(stack_a))
	{
		ft_lstclear(&stack_a);
		ft_msg_error();
	}
	ft_index_nums(stack_a);
	ft_check_sorted(stack_a);
	ft_sort(&stack_a, &stack_b, ft_lstsize(stack_a));
	ft_lstclear(&stack_a);
	return (0);
}
