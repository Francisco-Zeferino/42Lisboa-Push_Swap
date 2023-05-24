/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_actions.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:44:06 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/05/24 17:48:04 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_stacks *stack)
{
	int i;
	int size;
	int tmp;

	i = 0;
	size = stack->size_a - 1;

	tmp = stack->stack_a[size];
	while (size)
	{
		stack->stack_a[i] = stack->stack_a[size - 1];
		printf("Values : %d", stack->stack_a[size - 1]);
		size--;
        i++;
	}
	stack->stack_a[size] = tmp;
	printf("Values : %d", stack->stack_a[size - 1]);
}