/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotation_actions.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:20:03 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/05/30 10:04:52 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void reverse_rotate_a(t_stack **stack_a)
{
    int tmp;

    tmp = (*stack_a)->number;
    (*stack_a)->number = (*stack_a)->next->next->number;
    (*stack_a)->next->next->number = (*stack_a)->next->number;
    (*stack_a)->next->number = tmp;
    // while ((*stack_a) != NULL)
	// {
	// 	printf("DATA (*stack_b) -> %d\n", (*stack_a)->number);
	// 	(*stack_a) = (*stack_a)->next;
	// }
}

void reverse_rotate_b(t_stack **stack_b)
{
    int tmp;

    tmp = (*stack_b)->number;
    (*stack_b)->number = (*stack_b)->next->next->number;
    (*stack_b)->next->next->number = (*stack_b)->next->number;
    (*stack_b)->next->number = tmp;
    // while ((*stack_b) != NULL)
	// {
	// 	printf("DATA (*stack_b) -> %d\n", (*stack_b)->number);
	// 	(*stack_b) = (*stack_b)->next;
	// }
}

void reverse_rotate_r(t_stack **stack_a, t_stack **stack_b)
{
    reverse_rotate_a(stack_a);
    reverse_rotate_b(stack_b);
}