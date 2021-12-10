/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 15:03:10 by efinicke          #+#    #+#             */
/*   Updated: 2021/10/07 08:49:20 by efinicke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_bis;
	t_list	*from_lst;

	lst_bis = NULL;
	while (lst)
	{
		from_lst = ft_lstnew(f(lst->content));
		if (!from_lst)
			ft_lstadd_back(&lst_bis, from_lst);
		else
		{
			ft_lstclear(&lst_bis, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (lst_bis);
}
