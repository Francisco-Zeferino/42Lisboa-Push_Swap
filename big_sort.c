/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 09:37:08 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/06/22 15:44:16 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	calc_med(t_stack **stack_a)
{
	int	size;
	int	med;
	int	sum;

	size = stack_size((*stack_a));
	sum = get_stack_sum((*stack_a));
	med = sum / size;
	return (med);
}

void	big_sort(t_stack **stack_a, t_stack **stack_b, t_table *t_info)
{
	int	med;
	int	move_cost;
	int	bff;
	int	idx;
	int	value;

	move_cost = 0;
	med = 0;
	while (stack_size((*stack_a)) > 5)
	{
		med = calc_med(stack_a);
		if ((*stack_a)->number < med)
			push_b(stack_b, stack_a);
		else if ((*stack_a)->number > med)
			rotate_a(stack_a);
	}
	five_random_numbers(stack_a, stack_b);
	while ((*stack_b))
	{
		value = best_solution(stack_a, stack_b, t_info);
		move_top(stack_b, value);
		push_a(stack_a, stack_b);
	}
	print_list(stack_a);
}
