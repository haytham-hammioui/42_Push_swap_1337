/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 12:54:30 by hhammiou          #+#    #+#             */
/*   Updated: 2025/03/30 15:23:42 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_bonus.h"

int	main(int ac, char **av)
{
	t_num	*stack_a;
	t_num	*stack_b;
	char	*move;

	stack_b = NULL;
	if (ac == 1)
		exit(0);
	check_args(ac, av);
	stack_a = lstnum(ac, av);
	if (!stack_a || !ft_check_dup(stack_a))
		return (ft_lstclear(&stack_a), ft_msg_error(), 0);
	move = get_next_line(0);
	while (move)
	{
		ft_move(&stack_a, &stack_b, move);
		free(move);
		move = get_next_line(0);
	}
	free(move);
	if (ft_check_sorted(stack_a, stack_b))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	ft_clear(&stack_a, &stack_b);
	return (0);
}
