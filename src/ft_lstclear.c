#include "../inc/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*templ;
	t_list	*new;

	templ = *lst;
	if (!lst || !del )
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
