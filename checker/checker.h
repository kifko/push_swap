/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 12:37:24 by festeve-          #+#    #+#             */
/*   Updated: 2024/05/01 12:46:53 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# define BUFFER_SIZE 4
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include "../push_swap/push_swap.h"

typedef struct	s_list
{
	char			*str_buf;
	struct s_list	*next;
}				t_list;

int		found_newline(t_list *list);
t_list	*find_last_node_2(t_list *list);
char	*get_line(t_list *list);
void	copy_str(t_list *list, char *str);
int		len_to_newline(t_list *list);
void	polish_list(t_list **list);
char	*get_next_line(int fd);
void	dealloc(t_list **list, t_list *clen_node, char *buf);
void	create_list(t_list **list, int fd);
size_t	ft_strlen(const char *str);
char	*ft_substr(char *str_src, unsigned int start, size_t substrlen);
char	*ft_strdup(const char *src);
char	*ft_strjoin(char *s1, char *s2);
int		search_newline(char *s);

#endif
