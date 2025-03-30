/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 21:24:34 by hhammiou          #+#    #+#             */
/*   Updated: 2025/03/28 21:54:47 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_lstadd_front(t_num **lst, t_num *new)
{
	if (lst && new)
	{
		if (!*lst)
		{
			*lst = new;
			new->next = NULL;
		}
		else
		{
			new->next = *lst;
			*lst = new;
		}
	}
}
