/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:06:03 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/06/27 15:06:08 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	dup_checker(t_stack *stack_a)
{
	t_stack	*tmp;

	tmp = stack_a;
	while (tmp)
	{
		check_dup(tmp, tmp->number);
		tmp = tmp->next;
	}
}

int	check_sorted(t_stack **stack)
{
	t_stack	*tmp;

	tmp = (*stack);
	while (tmp && tmp->next)
	{
		if (tmp->number > tmp->next->number)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	def_cases(t_stack *stack_a, t_stack *stack_b, t_table *t_info, int size)
{
	if (check_sorted(&stack_a) == 0)
	{
		if (size == 2)
			two_numbers_case(&stack_a);
		else if (size == 3)
			three_random_numbers(&stack_a);
		else if (size == 4)
			four_random_numbers(&stack_a, &stack_b);
		else if (size == 5)
			five_random_numbers(&stack_a, &stack_b);
		else if (size > 5)
			big_sort(&stack_a, &stack_b, t_info);
	}
	free_list(stack_a);
	free_list(stack_b);
}

void	push_swap(char **av)
{
	int		size;
	int		i;
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_table	*t_info;

	stack_a = NULL;
	stack_b = NULL;
	t_info = NULL;
	i = 1;
	size = get_args_len(av);
	insert_front(&stack_a, ft_atoi_max(av[0]));
	while (i < size)
	{
		insert_end(&stack_a, ft_atoi_max(av[i]));
		i++;
	}
	dup_checker(stack_a);
	def_cases(stack_a, stack_b, t_info, size);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		av++;
		if (ac == 2)
			av = ft_split(*av, ' ');
		check_params(ac, av);
		push_swap(av);
	}
	else
		error_msg();
}
