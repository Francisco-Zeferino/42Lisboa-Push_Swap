/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:40:09 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/06/16 10:28:51 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_size(t_stack *stack)
{
	int	count;

	count = 0;
	while (stack)
	{
		count++;
		stack = stack->next;
	}
	return (count);
}

int	get_distance(t_stack **head, int val)
{
	t_stack	*stack;
	int		position;

	stack = (*head);
	position = 0;
	while (stack)
	{
		if (stack->number == val)
			break ;
		position++;
		stack = stack->next;
	}
	return (position);
}

int	get_min(t_stack **head)
{
	t_stack	*stack;
	int		min;

	stack = (*head);
	min = INT_MAX;
	while (stack)
	{
		if (min > stack->number)
			min = stack->number;
		stack = stack->next;
	}
	return (min);
}

int	get_stack_sum(t_stack *stack_a)
{
	int sum;

	sum = 0;
	while (stack_a)
	{
		sum = sum + stack_a->number;
		stack_a = stack_a->next;
	}
	return (sum);
}