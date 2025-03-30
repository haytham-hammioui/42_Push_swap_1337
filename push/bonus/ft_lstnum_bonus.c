/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnum_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 13:27:54 by hhammiou          #+#    #+#             */
/*   Updated: 2025/03/30 13:29:12 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_bonus.h"

t_num	*parse_num(char **nums, t_num **num)
{
	long	n;
	int		j;

	j = 0;
	while (nums[j])
	{
		n = ft_atoi(nums[j]);
		if (n > INT_MAX)
			return (NULL);
		ft_lstadd_back(num, ft_lstnew((int)n));
		j++;
	}
	return (*num);
}

t_num	*lstnum(int ac, char **av)
{
	t_num	*num;
	char	**nums;
	int		i;

	num = NULL;
	i = 1;
	while (i < ac)
	{
		nums = ft_split(av[i], ' ');
		if (!nums)
			return (ft_lstclear(&num), NULL);
		if (!parse_num(nums, &num))
			return (ft_free(&nums), ft_lstclear(&num), NULL);
		ft_free(&nums);
		i++;
	}
	return (num);
}
