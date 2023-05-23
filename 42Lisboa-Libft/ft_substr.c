/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 10:10:59 by francisco         #+#    #+#             */
/*   Updated: 2023/04/13 15:59:16 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	s_len;
	char			*new_s;
	unsigned int	i;

	i = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		new_s = (char *)malloc(sizeof(char));
		new_s[0] = '\0';
		return (new_s);
	}
	if (len > s_len - start)
		len = s_len - start;
	new_s = (char *)malloc(len + 1);
	if (new_s == NULL)
		return (0);
	if (s)
	{
		while (i < len)
			new_s[i++] = s[start++];
		new_s[i] = '\0';
	}
	return (new_s);
}
/*
int	main(void) {
    char* str = "Ola a todos!";
    char* substr = ft_substr(str, 4, 8);

    if (substr == NULL) {
        printf("Substring extraction failed!\n");
        return (1);
    }

    printf("Original string: %s\n", str);
    printf("Substring: %s\n", substr);

    free(substr);

    return (0);
}
*/
