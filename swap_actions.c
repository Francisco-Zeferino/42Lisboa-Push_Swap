/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_actions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 20:25:54 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/05/28 13:44:55 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack **head)
{
	t_stack *stack_a;
	int tmp;

	stack_a = malloc(sizeof(t_stack));
	stack_a = NULL;

	insert_front(&stack_a, (*head)->number);
	(*head) = (*head)->next;
	while (*head != NULL)
	{
		insert_end(&stack_a, (*head)->number);
		(*head) = (*head)->next;
	}
	tmp = stack_a->number;
	stack_a->number = stack_a->next->number;
	stack_a->next->number = tmp;
	while (stack_a != NULL)
	{
		printf("DATA STACK_A -> %d\n", stack_a->number);
		stack_a = stack_a->next;
	}
}

void	swap_b(t_stack **head)
{
	t_stack *stack_b;
	int tmp;

	stack_b = malloc(sizeof(t_stack));
	stack_b = NULL;

	insert_front(&stack_b, (*head)->number);
	(*head) = (*head)->next;
	while (*head != NULL)
	{
		insert_end(&stack_b, (*head)->number);
		(*head) = (*head)->next;
	}
	tmp = stack_b->number;
	stack_b->number = stack_b->next->number;
	stack_b->next->number = tmp;
	while (stack_b != NULL)
	{
		printf("DATA STACK_B -> %d\n", stack_b->number);
		stack_b = stack_b->next;
	}
}

void swap_r(t_stack **head)
{
	t_stack **temp;

	temp = head;
	swap_a(temp);
	swap_b(head);
}