/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:06:03 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/06/21 14:16:26 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_table	*t_info;
	int		size;
	int		i;

	stack_a = malloc(sizeof(t_stack));
	stack_b = malloc(sizeof(t_stack));
	t_info = malloc(sizeof(t_table));
	stack_a = NULL;
	stack_b = NULL;
	i = 1;
	size = get_args_len(av);
	insert_front(&stack_a, ft_atoi(av[0]));
	while (i < size)
	{
		insert_end(&stack_a, ft_atoi(av[i]));
		i++;
	}
	if (size == 2)
		two_numbers_case(&stack_a);
	else if (size == 3)
		three_random_numbers(&stack_a, &stack_b);
	else if (size == 4)
		four_random_numbers(&stack_a, &stack_b);
	else if (size == 5)
		five_random_numbers(&stack_a, &stack_b);
	else if (size > 5)
		big_sort(&stack_a, &stack_b, t_info);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		av++;
		if (ac == 2)
			av = ft_split(*av, ' ');
		push_swap(av);
	}
}
