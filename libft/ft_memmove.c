/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/12 14:23:05 by efinicke          #+#    #+#             */
/*   Updated: 2020/06/16 15:30:37 by efinicke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		s = s + (n - 1);
		d = d + (n - 1);
		while (n--)
			*d-- = *s--;
	}
	return (dest);
}
