/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_actions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:50:04 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/05/24 16:43:42 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_a(t_stacks *stack)
{
    int tmp;

    tmp = stack->stack_a[0];
    stack->stack_a[0] = stack->stack_a[1];
    stack->stack_a[1] = tmp;
}

void swap_b(t_stacks *stack)
{
    int tmp;
    
    tmp = stack->stack_b[0];
    stack->stack_b[0] = stack->stack_b[1];
    stack->stack_b[1] = tmp;
}

void swap_s(t_stacks *stack)
{
    swap_a(stack);
    swap_b(stack);
}