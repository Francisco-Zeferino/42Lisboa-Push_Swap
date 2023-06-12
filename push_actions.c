/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_actions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:38:21 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/05/31 11:48:37 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_a(t_stack **stack_a, t_stack **stack_b)
{
	printf("pa\n");
    insert_front(stack_a,(*stack_b)->number);
    delete_node(stack_b,(*stack_b)->number);
}

void push_b(t_stack **stack_b, t_stack **stack_a)
{
	printf("pb\n");
	insert_front(stack_b,(*stack_a)->number);
	delete_node(stack_a,(*stack_a)->number);
}
