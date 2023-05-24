/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_actions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:01:06 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/05/24 17:29:09 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stacks *stack)
{
	int	tmp;
	int	size;
	int	i;

	size = stack->size_a;
	i = 0;
	tmp = stack->stack_a[i];
	i++;
	while (i < size)
	{
		stack->stack_a[i - 1] = stack->stack_a[i];
		i++;
	}
	stack->stack_a[i] = tmp;
}

void	rotate_b(t_stacks *stack)
{
	int	tmp;
	int	size;
	int	i;

	size = stack->size_b;
	i = 0;
	tmp = stack->stack_b[i];
	i++;
	while (i < size)
	{
		stack->stack_b[i - 1] = stack->stack_b[i];
		i++;
	}
	stack->stack_b[i] = tmp;
}

void	rotate_r(t_stacks *stack)
{
	rotate_a(stack);
	rotate_b(stack);
}