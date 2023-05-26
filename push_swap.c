/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:06:03 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/05/26 15:31:25 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_swap(char **av)
{
    s_stacks *head;
    int size;
    int i;
    
    i = 1;
    size = get_args_len(av);
    insert_front(&head,ft_atoi(av[0]));
    while(i < size)
    {
        insert_end(&head,ft_atoi(av[i]));
        i++;
    }
    // while(head != NULL)
    // {
    //     printf("DATA -> %d\n",head->stack_a);
    //     head = head->next;
    // }
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		av++;
		if (ac == 2)
			av = ft_split(*av, ' ');
		push_swap(av);
		return (0);
	}
}