/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinicke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 01:08:59 by efinicke          #+#    #+#             */
/*   Updated: 2020/07/08 11:32:49 by efinicke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (!*alst && new)
	{
		*alst = new;
		return ;
	}
	if (alst && new)
	{
		new->next = *alst;
		*alst = new;
	}
	return ;
}
