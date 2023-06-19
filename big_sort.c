/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 09:37:08 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/06/19 19:45:18 by ffilipe-         ###   ########.fr       */
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

void	big_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	med;

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
}
