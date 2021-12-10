/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 05:36:52 by efinicke          #+#    #+#             */
/*   Updated: 2021/10/13 23:03:31 by efinicke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minitalk.h"

void	send_binary_char(char c, pid_t pid)
{
	int		bits;

	bits = -1;
	while (++bits < 8)
	{
		if (c & 0x80 >> bits)
		{
			if (kill(pid, SIGUSR2) == -1)
			{
				ft_putstr_fd("SIGUSR2 : EXIT_FAILURE\nPlease verify :", 2);
				ft_putstr_fd("\n\tthe PID\n\tif server is launched\n", 2);
				exit(EXIT_FAILURE);
			}
		}
		else
		{
			if (kill(pid, SIGUSR1) == -1)
			{
				ft_putstr_fd("SIGUSR1 : EXIT_FAILURE\nPlease verify :", 2);
				ft_putstr_fd("\n\tthe PID\n\tif server is launched\n", 2);
				exit(EXIT_FAILURE);
			}
		}
		usleep(100);
	}
}

int	main(int argc, char **argv)
{
	pid_t		pid;
	int			i;

	pid = -1;
	i = 0;
	if (argc == 3)
		pid = ft_atoi(argv[1]);
	else
	{
		ft_putstr_fd("PLEASE ENTER :\n", 2);
		ft_putstr_fd("\targv[1] : process_id\n\targv[2] : ASCII string\n", 2);
		return (1);
	}
	while (argv[2][i])
	{
		send_binary_char(argv[2][i], pid);
		i++;
	}
	send_binary_char('\0', pid);
	return (0);
}
