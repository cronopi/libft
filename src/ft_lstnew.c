/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:12:49 by rcastano          #+#    #+#             */
/*   Updated: 2023/01/16 11:12:49 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*patata;

	patata = malloc(sizeof(t_list));
	if (!patata)
		return (NULL);
	patata->content = content;
	patata->next = NULL;
	return (patata);
}

/* int	main(void)
{
	t_list *ft_lstnew("patata");
	return(0);
} */
