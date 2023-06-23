/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:40:09 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/06/23 15:38:54 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_size(t_stack *stack)
{
	t_stack	*tmp;
	int		count;

	tmp = stack;
	count = 0;
	while (tmp)
	{
		tmp = tmp->next;
		count++;
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

int	get_max(t_stack **head)
{
	t_stack	*stack;
	int		max;

	stack = (*head);
	max = INT_MIN;
	while (stack)
	{
		if (max < stack->number)
			max = stack->number;
		stack = stack->next;
	}
	return (max);
}

int	get_stack_sum(t_stack *stack_a)
{
	int	sum;

	sum = 0;
	while (stack_a)
	{
		sum = sum + stack_a->number;
		stack_a = stack_a->next;
	}
	return (sum);
}

int	check_sorted(t_stack **stack)
{
	t_stack	*tmp;

	tmp = (*stack);
	while (tmp && tmp->next)
	{
		if (tmp->number > tmp->next->number)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
