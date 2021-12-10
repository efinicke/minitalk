/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 21:31:58 by efinicke          #+#    #+#             */
/*   Updated: 2021/10/07 10:03:32 by efinicke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_set_number(char *str, int n, int size)
{
	int		i;
	long	new_number;

	i = 0;
	new_number = n;
	if (new_number < 0)
	{
		str[i] = '-';
		new_number = new_number * (-1);
	}
	while (new_number > 9)
	{
		str[size - 1 - i] = ((new_number % 10) + 48);
		new_number = new_number / 10;
		i++;
	}
	str[size - 1 - i] = new_number + 48;
	str[size] = '\0';
}

static int	ft_size(int n)
{
	int	size;

	size = 0;
	if (n == -2147483648)
		n = -2147483647;
	if (n < 0)
	{
		n = n * (-1);
		size++;
	}
	while (n > 9)
	{
		n = n / 10;
		size++;
	}
	size++;
	return (size);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*str;

	size = ft_size(n);
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	ft_set_number(str, n, size);
	return (str);
}
