/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:55:13 by marvin            #+#    #+#             */
/*   Updated: 2023/04/13 13:35:12 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, int n)
{
	unsigned char		*pointer_dest;
	const unsigned char	*pointer_src;

	pointer_dest = (unsigned char *)dest;
	pointer_src = (const unsigned char *)src;
	if (pointer_dest == NULL && pointer_src == NULL)
	{
		return (NULL);
	}
	if (pointer_dest <= pointer_src)
	{
		while (n--)
			*pointer_dest++ = *pointer_src++;
	}
	else
	{
		pointer_dest += n;
		pointer_src += n;
		while (n--)
			*--pointer_dest = *--pointer_src;
	}
	return (dest);
}
