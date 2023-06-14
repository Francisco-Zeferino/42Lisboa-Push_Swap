/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:06:02 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/06/14 15:57:43 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	calc_med(t_stack **stack_a)
{
	int	size;
	int	sum;
	int med;

	size = stack_size((*stack_a));
	sum = get_stack_sum((*stack_a));
	med = size / sum;


}

void	big_sort(t_stack **stack_a, t_stack **stack_b)
{
	calc_med(stack_a);
}
