/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:11:10 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/05/28 13:34:59 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./42Lisboa-Libft/libft.h"
# include <stdio.h>
# include <stdlib.h>

struct					s_stack
{
	int					number;
	struct s_stack		*next;
	struct s_stack		*prev;
};
typedef struct s_stack	t_stack;

void					delete_node(t_stack **head, int key);
void					insert_end(t_stack **head, int data);
void					insert_front(t_stack **head, int data);
int						get_args_len(char **av);
void					swap_a(t_stack **head);
void					swap_b(t_stack **head);
void					swap_r(t_stack **head);

#endif