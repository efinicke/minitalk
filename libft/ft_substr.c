/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 12:51:27 by efinicke          #+#    #+#             */
/*   Updated: 2021/10/07 08:25:55 by efinicke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*sbstr;

	i = 0;
	if (!s)
		return (NULL);
	if ((size_t)ft_strlen(s) < start)
		return (ft_strdup(""));
	else
	{
		sbstr = (char *)malloc(sizeof(char) * ++len);
		if (!sbstr)
			return (NULL);
		else
		{
			while (s[start] && --len)
			{
				sbstr[i] = s[start];
				i++;
				start++;
			}
			sbstr[i] = '\0';
		}
	}
	return (sbstr);
}
