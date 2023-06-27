/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_funcs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:28:02 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/06/27 15:42:15 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	conv_to_nbr(const char *str, int sign)
{
	long int	result;
	int			i;

	i = 0;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		if ((result * sign) >= INT_MAX || (result * sign) <= INT_MIN)
			error_msg();
		i++;
	}
	return (result * sign);
}

int	ft_atoi_max(const char *str)
{
	int			i;
	long int	sign;

	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	if (str[i] < '0' || str[i] > '9')
		error_msg();
	return (conv_to_nbr(str, sign));
}
