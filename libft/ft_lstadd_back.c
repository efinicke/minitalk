/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 06:30:41 by efinicke          #+#    #+#             */
/*   Updated: 2021/10/07 08:49:53 by efinicke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*new_element;

	if (!*alst && new)
	{
		*alst = new;
		return ;
	}
	if (*alst && new)
	{
		new_element = ft_lstlast(*alst);
		new_element->next = new;
	}
}
