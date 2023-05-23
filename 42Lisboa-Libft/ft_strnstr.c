/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:21:40 by marvin            #+#    #+#             */
/*   Updated: 2023/04/13 13:38:37 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, unsigned int len)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	if (!str && !len)
		return (0);
	if (to_find[0] == '\0' && to_find == str)
		return ((char *)str);
	while (str[i] != '\0')
	{
		while (str[i + x] == to_find[x] && (str[i + x] != '\0') && len > (i
				+ x))
			x++;
		if (to_find[x] == '\0')
			return ((char *)str + i);
		i++;
		x = 0;
	}
	return (0);
}
