/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:11:10 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/05/26 15:06:50 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
#include "./42Lisboa-Libft/libft.h"

struct s_stacks
{
    int stack_a;
    struct s_stacks *next;
    struct s_stacks *prev;
};
typedef struct s_stacks s_stacks;

void delete_node(s_stacks **head, int key);
void insert_end(s_stacks **head, int data);
void insert_front(s_stacks **head, int data);
int	get_args_len(char **av);

#endif