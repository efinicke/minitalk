/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 19:03:22 by efinicke          #+#    #+#             */
/*   Updated: 2021/10/07 08:31:57 by efinicke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	char	*stmp;

	s2 = malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!s2)
		return (NULL);
	stmp = s2;
	while (*s1)
		*s2++ = *s1++;
	*s2 = '\0';
	return (stmp);
}
