/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:08:43 by marvin            #+#    #+#             */
/*   Updated: 2023/04/13 13:32:25 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buff, int c, int count)
{
	int	i;

	i = 0;
	while (count > i)
	{
		if (((unsigned char *)buff)[i] == (unsigned char)c)
		{
			return (((unsigned char *)buff) + i);
		}
		i++;
	}
	return (0);
}
