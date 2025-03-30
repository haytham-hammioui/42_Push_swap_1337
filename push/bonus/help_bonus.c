/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 13:19:57 by hhammiou          #+#    #+#             */
/*   Updated: 2025/03/30 15:23:07 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_bonus.h"

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

void	ft_clear(t_num **s_a, t_num **s_b)
{
	ft_lstclear(s_a);
	ft_lstclear(s_b);
}

int	ft_check_sorted(t_num *s_a, t_num *s_b)
{
	if (s_b)
		return (0);
	while (s_a->next)
	{
		if (s_a->content > s_a->next->content)
			return (0);
		s_a = s_a->next;
	}
	return (1);
}
