/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 12:22:16 by hhammiou          #+#    #+#             */
/*   Updated: 2025/03/28 21:54:40 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	ft_lstsize(t_num *lst)
{
	size_t	i;

	i = 0;
	if (!lst)
		return (i);
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

int	ft_lstsize2(t_num **lst)
{
	size_t	i;
	t_num	*tmp;

	i = 0;
	if (!lst || !*lst)
		return (0);
	tmp = *lst;
	while (tmp)
	{
		i++;
		tmp = tmp -> next;
	}
	return (i);
}
