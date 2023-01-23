/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:37:09 by rcastano          #+#    #+#             */
/*   Updated: 2023/01/23 10:37:10 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*templ;
	t_list	*new;

	templ = *lst;
	if (!lst || !del)
		return ;
	while (templ)
	{
		new = templ->next;
		del(templ->content);
		free(templ);
		templ = new;
	}
	*lst = NULL;
}
