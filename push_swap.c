/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:18:38 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/05/24 17:34:37 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(char **num_arr)
{
	t_stacks	stacks;
	int			size;
	int			i;

	i = 0;
	size = get_args_len(num_arr);
	stacks.stack_a = malloc(size * sizeof(int));
	if (!stacks.stack_a)
	{
		free(stacks.stack_a);
		return ;
	}
	stacks.size_a = size;
	stacks.size_b = 0;
	while (i < size)
	{
		stacks.stack_a[i] = ft_atoi(num_arr[i]);
		i++;
	}
	reverse_rotate_a(&stacks);
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