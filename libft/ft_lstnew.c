/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 00:30:22 by efinicke          #+#    #+#             */
/*   Updated: 2021/10/07 08:48:15 by efinicke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*objet_1;

	objet_1 = (t_list *)malloc(sizeof(objet_1));
	if (!objet_1)
		return (NULL);
	(*objet_1).content = content;
	(*objet_1).next = NULL;
	return (objet_1);
}
