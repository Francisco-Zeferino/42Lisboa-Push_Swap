/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_friend_calcs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:46:07 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/06/23 15:23:19 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_val_idx(t_stack **stack, int val)
{
	t_stack	*stack_save;
	int		i;

	stack_save = (*stack);
	i = 0;
	while ((*stack))
	{
		if ((*stack)->number == val)
		{
			(*stack) = stack_save;
			return (i);
		}
		i++;
		(*stack) = (*stack)->next;
	}
	(*stack) = stack_save;
	return (0);
}

int	get_move_cost(t_stack **stack, int value)
{
	t_stack	*tmp;
	int		count;
	int		len;

	len = stack_size((*stack));
	count = 0;
	tmp = (*stack);
	while (tmp && tmp->number != value)
	{
		count++;
		tmp = tmp->next;
	}
	if (count > len / 2)
		return (len - count);
	return (count);
}

int	get_friend(t_stack **stack_a, int ref)
{
	t_stack	*tmp;
	int		friend;

	friend = INT_MAX;
	tmp = (*stack_a);
	while (tmp)
	{
		if (tmp->number > ref && friend > tmp->number)
			friend = tmp->number;
		tmp = tmp->next;
	}
	return (friend);
}

int	best_solution(t_stack **stack_a, t_stack **stack_b, t_table *t_info)
{
	t_stack	*tmp;
	int		best_friend_check;
	int		best_friend;
	int		lowest_cost;
	int		cost_bf;
	int		cost_num;
	int		best_cost;
	int		best_nbr;

	lowest_cost = INT_MAX;
	tmp = (*stack_b);
	while (tmp)
	{
		best_friend_check = get_friend(stack_a, tmp->number);
		cost_bf = get_move_cost(stack_a, best_friend_check);
		cost_num = get_move_cost(stack_b, tmp->number);
		best_cost = cost_bf + cost_num;
		if (best_cost < lowest_cost)
		{
			best_nbr = tmp->number;
			lowest_cost = best_cost;
			best_friend = best_friend_check;
		}
		tmp = tmp->next;
	}
	move_top(stack_a, get_val_idx(stack_a, best_friend), 'a');
	return (best_nbr);
}
