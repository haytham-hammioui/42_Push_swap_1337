/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 17:18:20 by hhammiou          #+#    #+#             */
/*   Updated: 2025/03/29 20:36:47 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_num
{
	int				content;
	int				index;
	int				pos;
	struct s_num	*next;
}					t_num;

void	ft_msg_error(void);
void	check_args(int ac, char **av);
t_num	*lstnum(int ac, char **av);
void	ft_lstclear(t_num **lst);
void	ft_free(char ***strs);
long	ft_atoi(const char *str);
void	ft_lstadd_back(t_num **lst, t_num *new);
void	ft_lstadd_front(t_num **lst, t_num *new);
t_num	*ft_lstnew(int content);
char	**ft_split(char *s, char c);
t_num	*ft_lstlast(t_num *lst);
int		ft_check_dup(t_num *stack_a);
void	ft_index_nums(t_num *stack_a);
void	ft_check_sorted(t_num *s_a);
int		ft_lstsize(t_num *lst);
void	ft_swap(t_num **stack, int flag);
void	ft_push(t_num **stack1, t_num **stack2, int flag);
void	ft_rotate(t_num **stack, int flag);
void	ft_rrotate(t_num **stack, int flag);
void	sort_two(t_num **s_a);
void	sort_three(t_num **s_a);
t_num	*get_max(t_num **s);
t_num	*get_min(t_num **s);
void	sort_four(t_num **s_a, t_num **s_b);
void	sort_five(t_num **s_a, t_num **s_b);
void	set_pos(t_num **s);
int		ft_lstsize2(t_num **lst);
void	sort_large(t_num **s_a, t_num **s_b);

#endif