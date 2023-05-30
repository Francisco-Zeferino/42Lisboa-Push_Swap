/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:19:22 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/05/30 12:01:40 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void three_random_numbers(t_stack **stack_a, t_stack **stack_b)
{
    if((*stack_a)->number > (*stack_a)->next->number && (*stack_a)->number < (*stack_a)->next->next->number)
        swap_a(stack_a);   
    else if((*stack_a)->number > (*stack_a)->next->number && (*stack_a)->next->number > (*stack_a)->next->next->number)
    {
        swap_a(stack_a);
        reverse_rotate_a(stack_a);
    }
    else if((*stack_a)->number > (*stack_a)->next->number && (*stack_a)->next->number < (*stack_a)->next->next->number)
        rotate_a(stack_a);
    else if((*stack_a)->number < (*stack_a)->next->number && (*stack_a)->next->number > (*stack_a)->next->next->number && (*stack_a)->next->next->number > (*stack_a)->number)
    {
        swap_a(stack_a);
        rotate_a(stack_a);
    }
    else if((*stack_a)->number < (*stack_a)->next->number && (*stack_a)->next->number > (*stack_a)->next->next->number)
        reverse_rotate_a(stack_a);
}

void five_random_numbers(t_stack **stack_a, t_stack **stack_b)
{
    push_b(stack_b, stack_a);
    push_b(stack_b, stack_a);
    swap_a(stack_a);
    rotate_a(stack_a);
    push_a(stack_a, stack_b);
    rotate_a(stack_a);
    push_a(stack_a, stack_b);
    //printf("PUSHED DATA -> %d\n", (*stack_a)->number);
}