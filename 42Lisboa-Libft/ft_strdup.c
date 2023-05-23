/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 10:04:59 by francisco         #+#    #+#             */
/*   Updated: 2023/04/13 13:32:41 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*new_str;
	int		len;
	int		i;

	len = ft_strlen(str) + 1;
	i = 0;
	new_str = (char *)malloc(len);
	if (new_str == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}
