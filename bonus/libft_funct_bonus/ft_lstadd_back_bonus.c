/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 14:04:04 by hhammiou          #+#    #+#             */
/*   Updated: 2025/03/30 14:19:57 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_bonus.h"

void	ft_lstadd_back(t_num **lst, t_num *new)
{
	t_num	*f;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			f = ft_lstlast(*lst);
			f->next = new;
		}
	}
}
