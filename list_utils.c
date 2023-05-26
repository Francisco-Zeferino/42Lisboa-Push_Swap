/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:40:09 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/05/26 15:58:54 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void insert_front(t_stack **head, int data)
{
    t_stack *newNode;

    newNode = malloc(sizeof(t_stack));
    newNode->number = data;
    newNode->next = (*head);
    newNode->prev = NULL;
    if((*head) != NULL)
        (*head)->prev = newNode;
    (*head) = newNode;
}

void insert_end(t_stack **head, int data)
{
    t_stack *newNode;
    t_stack *temp = *head;
     
    newNode = malloc(sizeof(t_stack));
    newNode->number = data;
    newNode->next = NULL;
    temp = *head;
    if(*head == NULL)
    {
        newNode->prev = NULL;
        *head = newNode;
        return ;
    }
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}

void delete_node(t_stack **head, int key) 
{
    t_stack *tmp;
    if (!head || !(*head))
        return ;
    if((*head)->number == key)
    {
        tmp = *head;    
        *head = (*head)->next;
        free(tmp);
    }
}