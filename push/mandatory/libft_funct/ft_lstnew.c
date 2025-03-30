/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 19:18:24 by hhammiou          #+#    #+#             */
/*   Updated: 2025/03/20 19:40:03 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

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
