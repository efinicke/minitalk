/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 17:53:29 by efinicke          #+#    #+#             */
/*   Updated: 2021/10/07 08:31:01 by efinicke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buffer;
	char	*str;
	int		str_sz;

	if (!s1 || !s2)
		return (NULL);
	str_sz = (ft_strlen(s1) + ft_strlen(s2) + 1);
	buffer = malloc(sizeof(buffer) * str_sz);
	if (!buffer)
		return (NULL);
	str = buffer;
	while (*s1)
		*buffer++ = *s1++;
	while (*s2)
		*buffer++ = *s2++;
	*buffer = '\0';
	return (str);
}
