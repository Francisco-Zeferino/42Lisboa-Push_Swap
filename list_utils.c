/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:40:09 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/05/26 15:02:40 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void insert_front(s_stacks **head, int data)
{
    s_stacks *newNode;

    newNode = malloc(sizeof(s_stacks));
    newNode->stack_a = data;
    newNode->next = (*head);
    newNode->prev = NULL;
    if((*head) != NULL)
        (*head)->prev = newNode;
    (*head) = newNode;
}

void insert_end(s_stacks **head, int data)
{
    s_stacks *newNode;
    s_stacks *temp = *head;
     
    newNode = malloc(sizeof(s_stacks));
    newNode->stack_a = data;
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

void delete_node(s_stacks **head, int key) 
{
    s_stacks *tmp;
    if (!head || !(*head))
        return ;
    if((*head)->stack_a == key)
    {
        tmp = *head;    
        *head = (*head)->next;
        free(tmp);
    }
}