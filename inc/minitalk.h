/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinicke <efinicke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 04:34:54 by efinicke          #+#    #+#             */
/*   Updated: 2021/10/13 22:36:01 by efinicke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H

# define MINITALK_H

# include "../libft/libft.h"
# include <sys/types.h>
# include <unistd.h>
# include <signal.h>
# include <stdio.h>
# include <stdlib.h>

/*
** server
*/
void	sigusr_handler_server(int signum, siginfo_t *client_pid, void *empty);

/*
** client
*/
void	send_binary_char(char c, pid_t pid);
void	sigusr_handler_server(int signum, siginfo_t *client_pid, void *empty);

#endif
