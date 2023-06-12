/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:19:22 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/06/12 14:39:04 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_top(t_stack **head, int distance)
{
	int	tmp;

	if (distance == 0)
		return ;
	tmp = stack_size((*head)) - distance;
	if (distance <= (stack_size((*head)) / 2))
	{
		while (distance > 0)
		{
			rotate_a(head);
			distance--;
		}
	}
	else
	{
		while (tmp > 0)
		{
			reverse_rotate_a(head);
			tmp--;
		}
	}
}

void	two_numbers_case(t_stack **stack_a)
{
	if ((*stack_a)->number > (*stack_a)->next->number)
		swap_a(stack_a);
}

void	three_random_numbers(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a)->number > (*stack_a)->next->number
		&& (*stack_a)->number < (*stack_a)->next->next->number)
		swap_a(stack_a);
	else if ((*stack_a)->number > (*stack_a)->next->number
		&& (*stack_a)->next->number > (*stack_a)->next->next->number)
	{
		swap_a(stack_a);
		reverse_rotate_a(stack_a);
	}
	else if ((*stack_a)->number > (*stack_a)->next->number
		& (*stack_a)->next->number < (*stack_a)->next->next->number)
		rotate_a(stack_a);
	else if ((*stack_a)->number < (*stack_a)->next->number
		&& (*stack_a)->next->number > (*stack_a)->next->next->number
		&& (*stack_a)->next->next->number > (*stack_a)->number)
	{
		swap_a(stack_a);
		rotate_a(stack_a);
	}
	else if ((*stack_a)->number < (*stack_a)->next->number
		&& (*stack_a)->next->number > (*stack_a)->next->next->number)
		reverse_rotate_a(stack_a);
}

void	four_random_numbers(t_stack **stack_a, t_stack **stack_b)
{
	move_top(stack_a, get_distance(stack_a, get_min(stack_a)));
	push_b(stack_b, stack_a);
	three_random_numbers(stack_a, stack_b);
	push_a(stack_a, stack_b);
}

void	five_random_numbers(t_stack **stack_a, t_stack **stack_b)
{
	move_top(stack_a, get_distance(stack_a, get_min(stack_a)));
	push_b(stack_b, stack_a);
	move_top(stack_a, get_distance(stack_a, get_min(stack_a)));
	push_b(stack_b, stack_a);
	three_random_numbers(stack_a, stack_b);
	push_a(stack_a, stack_b);
	push_a(stack_a, stack_b);
}
