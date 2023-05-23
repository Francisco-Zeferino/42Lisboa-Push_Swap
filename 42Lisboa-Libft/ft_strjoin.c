/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 10:32:23 by francisco         #+#    #+#             */
/*   Updated: 2023/04/13 13:53:54 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		len_str1;
	int		len_str2;
	int		total_len;

	len_str1 = ft_strlen(s1);
	len_str2 = ft_strlen(s2);
	total_len = len_str1 + len_str2;
	new_str = (char *)malloc(total_len + 1);
	if (new_str == NULL)
	{
		return (0);
	}
	ft_strlcpy(new_str, s1, len_str1 + 1);
	ft_strlcpy(new_str + len_str1, s2, len_str2 + 1);
	return (new_str);
}

// int main()
// {
// 	char *string = ft_strjoin("Ola ", "a todos!");
// 	printf("%s\n",string);
// }
