/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_add_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 08:15:32 by efinicke          #+#    #+#             */
/*   Updated: 2021/10/07 10:20:52 by efinicke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_str_add_first_char(char c)
{
	char	*add;

	if (!c)
		return (NULL);
	add = (char *)malloc(sizeof(char) * 2);
	if (!add)
		return (NULL);
	add[0] = c;
	add[1] = '\0';
	return (add);
}

char	*ft_str_add_char(char *str, char c)
{
	char	*add;
	int		i;

	if (!c)
		return (NULL);
	if (!str)
		add = ft_str_add_first_char(c);
	else
	{
		add = (char *)malloc(sizeof(char) * (ft_strlen(str) + 2));
		if (!add)
		{
			free(str);
			return (NULL);
		}
		i = -1;
		while (str[++i])
			add[i] = str[i];
		free(str);
		add[i++] = c;
		add[i] = '\0';
	}
	return (add);
}
