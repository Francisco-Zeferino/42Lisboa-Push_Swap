/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_actions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 20:25:54 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/06/06 11:55:46 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack **stack_a)
{
	t_stack	*temp;
	int		tmp;

	printf("sa\n");
	temp = (*stack_a);
	tmp = (*stack_a)->number;
	(*stack_a)->number = (*stack_a)->next->number;
	(*stack_a)->next->number = tmp;
	(*stack_a) = temp;
	// while ((*stack_a) != NULL)
	// {
	// 	printf("SWAP DATA (*stack_a) -> %d\n", (*stack_a)->number);
	// 	(*stack_a) = (*stack_a)->next;
	// }
}

void	swap_b(t_stack **stack_b)
{
	t_stack	*temp;
	int		tmp;

	printf("sb\n");
	temp = (*stack_b);
	tmp = (*stack_b)->number;
	(*stack_b)->number = (*stack_b)->next->number;
	(*stack_b)->next->number = tmp;
	(*stack_b) = temp;
	// while ((*stack_b) != NULL)
	// {
	// 	printf("DATA (*stack_b) -> %d\n", (*stack_b)->number);
	// 	(*stack_b) = (*stack_b)->next;
	// }
}

void	swap_s(t_stack **stack_a, t_stack **stack_b)
{
	swap_a(stack_a);
	swap_b(stack_b);
}
