/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:16:31 by hhammiou          #+#    #+#             */
/*   Updated: 2025/03/22 17:02:24 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

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
