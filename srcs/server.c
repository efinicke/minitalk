/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 04:18:23 by efinicke          #+#    #+#             */
/*   Updated: 2021/10/12 05:45:04 by efinicke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minitalk.h"

void	sigusr_handler_server(int signum, siginfo_t *client_pid, void *empty)
{
	static char	c = -1;
	static int	bits = 0;
	static char	*txt = NULL;

	(void)empty;
	(void)client_pid;
	if (signum == SIGUSR1)
		c ^= 0x80 >> bits;
	else if (signum == SIGUSR2)
		c |= 0x80 >> bits;
	if (++bits == 8)
	{
		if (c)
			txt = ft_str_add_char(txt, c);
		else
		{
			ft_putstr_fd(txt, 1);
			free (txt);
			txt = NULL;
		}
		bits = 0;
		c = -1;
	}
}

int	main(void)
{
	struct sigaction	act;

	act.sa_sigaction = sigusr_handler_server;
	act.sa_flags = SA_SIGINFO;
	ft_putstr_fd("process_id : ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putstr_fd("\n", 1);
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	while (1)
		pause();
	return (0);
}
