/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 14:21:53 by hhammiou          #+#    #+#             */
/*   Updated: 2025/03/30 14:22:05 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_bonus.h"

t_num	*ft_lstnew(int content)
{
	t_num	*l;

	l = malloc(sizeof(t_num));
	if (!l)
		return (NULL);
	l->content = content;
	l->next = NULL;
	return (l);
}
