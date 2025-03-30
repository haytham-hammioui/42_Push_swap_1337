/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 13:16:08 by hhammiou          #+#    #+#             */
/*   Updated: 2025/03/30 13:16:20 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_bonus.h"

void	ft_lstclear(t_num **lst)
{
	t_num	*l;

	if (lst && *lst)
	{
		while (*lst)
		{
			l = *lst;
			*lst = l->next;
			free(l);
		}
	}
}
