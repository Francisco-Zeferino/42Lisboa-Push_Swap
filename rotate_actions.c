/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_actions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:02:24 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/05/31 14:26:11 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack **stack_a)
{
	t_stack	*temp;
	int		tmp;

	temp = (*stack_a);
	printf("ra\n");
	while ((*stack_a) != NULL)
	{
		tmp = (*stack_a)->number;
		if ((*stack_a)->next)
		{
			(*stack_a)->number = (*stack_a)->next->number;
			(*stack_a)->next->number = tmp;
		}
		(*stack_a) = (*stack_a)->next;
	}
	(*stack_a) = temp;
}

void	rotate_b(t_stack **stack_b)
{
	int	tmp;

	printf("rb\n");
	tmp = (*stack_b)->number;
	(*stack_b)->number = (*stack_b)->next->number;
	(*stack_b)->next->number = (*stack_b)->next->next->number;
	(*stack_b)->next->next->number = tmp;
}
