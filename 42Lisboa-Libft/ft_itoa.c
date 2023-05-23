/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 18:08:29 by francisco         #+#    #+#             */
/*   Updated: 2023/04/13 13:55:57 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*put_char(char *str, unsigned int number, int len)
{
	while (number > 0)
	{
		str[len--] = '0' + (number % 10);
		number = number / 10;
	}
	return (str);
}

int	check_numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	unsigned int	number;
	int				sign;

	sign = 1;
	len = check_numlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		sign = sign * -1;
		number = n * -1;
		str[0] = '-';
	}
	else
		number = n;
	str = put_char(str, number, len);
	return (str);
}
