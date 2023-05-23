/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 09:59:23 by francisco         #+#    #+#             */
/*   Updated: 2023/04/13 13:32:10 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(int n, int size)
{
	void	*ptr;
	int		total_size;
	int		i;

	total_size = n * size;
	i = 0;
	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < total_size)
	{
		*((char *)ptr + i) = 0;
		i++;
	}
	return (ptr);
}
