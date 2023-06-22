/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_friend_calcs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:46:07 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/06/22 15:55:03 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_val_idx(t_stack **stack, int val)
{
	t_stack	*stack_save;
	int		i;

	stack_save = (*stack);
	i = 1;
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

int	get_move_cost(t_stack **stack, int value_idx)
{
	int	tmp;
	int	i;

	i = 1;
	if (value_idx == 1)
		return (0);
	if (value_idx <= (stack_size((*stack)) / 2))
	{
		while (value_idx > 0)
		{
			i++;
			value_idx--;
		}
	}
	else
	{
		tmp = stack_size((*stack)) - value_idx;
		while (tmp > 0)
		{
			i++;
			tmp--;
		}
	}
	return (i);
}

int	get_friend(t_stack **stack_a, int ref)
{
	t_stack	*s_tmp_a;
	int		nbr;

	s_tmp_a = (*stack_a);
	while ((*stack_a))
	{
		if ((*stack_a)->number > ref)
		{
			nbr = (*stack_a)->number;
			(*stack_a) = s_tmp_a;
			return (nbr);
		}
		(*stack_a) = (*stack_a)->next;
	}
	(*stack_a) = s_tmp_a;
	return (0);
}

int	best_solution(t_stack **stack_a, t_stack **stack_b, t_table *t_info)
{
	t_stack	*tmp;
	int		friend;
	int		lowest_cost;
	int		cost_bf;
	int		cost_num;
	int		best_cost;
	int		best_nbr;

	lowest_cost = INT_MAX;
	tmp = (*stack_b);
	while (tmp)
	{
		friend = get_friend(stack_a, tmp->number);
		cost_bf = get_move_cost(stack_a, get_val_idx(stack_a, friend));
		cost_num = get_move_cost(stack_b, get_val_idx(stack_b, tmp->number));
		best_cost = cost_bf + cost_num;
		//printf("Best Friend : %d\n",friend);
		if (best_cost < lowest_cost)
		{
			best_nbr = tmp->number;
			lowest_cost = best_cost;
		}
		tmp = tmp->next;
	}
	return (best_nbr);
}
