/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header_bonus.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhammiou <hhammiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 15:23:18 by hhammiou          #+#    #+#             */
/*   Updated: 2025/03/30 15:23:21 by hhammiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_BONUS_H
# define HEADER_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_num
{
	int				content;
	int				index;
	int				pos;
	struct s_num	*next;
}					t_num;

void	check_args(int ac, char **av);
long	ft_atoi(const char *str);
char	**ft_split(char *s, char c);
t_num	*ft_lstnew(int content);
char	*get_next_line(int fd);
size_t	ft_strlen(const	char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(char *s);
char	*ft_strjoin(char *s1, char *s2);
void	ft_lstclear(t_num **lst);
t_num	*ft_lstlast(t_num *lst);
int		ft_check_sorted(t_num *s_a, t_num *s_b);
t_num	*lstnum(int ac, char **av);
int		ft_check_dup(t_num *stack_a);
void	ft_lstadd_front(t_num **lst, t_num *new);
void	ft_free(char ***strs);
void	ft_msg_error(void);
void	ft_clear(t_num **s_a, t_num **s_b);
void	ft_move(t_num **s_a, t_num **s_b, char *move);
void	ft_lstadd_back(t_num **lst, t_num *new);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

#endif