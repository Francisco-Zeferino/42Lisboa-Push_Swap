/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:05:12 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/06/27 15:28:16 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_args_len(char **av)
{
	int	i;

	i = 0;
	while (*av)
	{
		av++;
		i++;
	}
	return (i);
}

void	check_params(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	ac--;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if ((av[i][j] < '0' || av[i][j] > '9' || av[i][j] == ' ')
				&& av[i][j] != '-' && av[i][j] != '+')
				error_msg();
			j++;
		}
		i++;
	}
}

void	check_dup(t_stack *stack, int nbr)
{
	t_stack	*tmp;

	tmp = stack;
	tmp = tmp->next;
	while (tmp)
	{
		if (nbr == tmp->number)
		{
			free_list(stack);
			error_msg();
		}
		tmp = tmp->next;
	}
}
