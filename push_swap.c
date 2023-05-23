/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:18:38 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/05/23 17:59:58 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(char **num_arr)
{
	t_stacks	stack;
	int			size;
	int			i;

	i = 0;
	size = get_args_len(num_arr);
	stack.size_a = size;
	stack.stack_b = malloc(size * sizeof(int));
	if (!stack.stack_a)
	{
		free(stack.stack_a);
		return ;
	}
	stack.size_b = 0;
	while (i < size)
	{
		stack.stack_a[i] = ft_atoi(num_arr[i]);
		i++;
	}
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