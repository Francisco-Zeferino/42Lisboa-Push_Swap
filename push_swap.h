/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:11:10 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/05/26 15:57:44 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
#include "./42Lisboa-Libft/libft.h"

struct s_stack
{
    int number;
    struct s_stack *next;
    struct s_stack *prev;
};
typedef struct s_stack t_stack;

void delete_node(t_stack **head, int key);
void insert_end(t_stack **head, int data);
void insert_front(t_stack **head, int data);
int	get_args_len(char **av);

#endif