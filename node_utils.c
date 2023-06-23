/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 08:50:45 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/06/23 15:49:03 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insert_front(t_stack **head, int data)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	new_node->number = data;
	new_node->next = (*head);
	new_node->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = new_node;
	(*head) = new_node;
}

void	insert_end(t_stack **head, int data)
{
	t_stack	*new_node;
	t_stack	*temp;

	temp = *head;
	new_node = malloc(sizeof(t_stack));
	new_node->number = data;
	new_node->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return ;
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
}

void	delete_node(t_stack **head, int key)
{
	t_stack	*temp;

	temp = (*head);
	if (temp != NULL && temp->number == key)
	{
		(*head) = temp->next;
		free(temp);
	}
}

void	print_list(t_stack **head)
{
	t_stack	*temp;

	temp = (*head);
	while ((*head))
	{
		printf("%d\n", (*head)->number);
		(*head) = (*head)->next;
	}
	(*head) = temp;
}
