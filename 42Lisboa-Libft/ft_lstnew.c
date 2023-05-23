/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 08:07:48 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/04/14 09:51:07 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*next_content;

	next_content = (t_list *)malloc(sizeof(t_list));
	if (next_content == NULL)
		return (0);
	next_content->content = content;
	next_content->next = NULL;
	return (next_content);
}
