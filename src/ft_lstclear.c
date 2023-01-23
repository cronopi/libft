/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:37:09 by rcastano          #+#    #+#             */
/*   Updated: 2023/01/23 15:52:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*new;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		new = (*lst)->next;
		del((*lst)->content);
		free((*lst));
		(*lst) = new;
	}
	//*lst = NULL;
}

/* void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *begin;

    if (!lst || !*lst)
        return ;
    while (*lst != NULL)
    {
        begin = (*lst)->next;
        ft_lstdelone((*lst), del);
        (*lst) = begin;
    }
} */
