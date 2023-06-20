/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_friend_calcs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:46:07 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/06/20 15:43:14 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_val_idx(t_stack **stack_a, int val)
{
	t_stack	*stack;
	int		i;

	stack = (*stack_a);
	i = 0;
	while (stack)
	{
		if (stack->number == val)
			return (i);
		i++;
		stack = stack->next;
	}
	(*stack_a) = stack;
	return (0);
}

int	get_move_cost(t_stack **stack_a, int value_idx)
{
	int	tmp;
	int	i;

	i = 0;
	if (value_idx == 0)
		return (0);
	if (value_idx <= (stack_size((*stack_a)) / 2))
	{
		while (value_idx > 0)
		{
			i++;
			value_idx--;
		}
	}
	else
	{
		tmp = stack_size((*stack_a)) - value_idx;
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
	t_stack	**s_tmp_a;

	s_tmp_a = stack_a;
	while ((*stack_a))
	{
		if ((*stack_a)->number > ref)
		{
			return ((*stack_a)->number);
		}
		(*stack_a) = (*stack_a)->next;
	}
	return 0;
}


