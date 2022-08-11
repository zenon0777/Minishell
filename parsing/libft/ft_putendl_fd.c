/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:24:14 by med-doba          #+#    #+#             */
/*   Updated: 2022/08/08 08:46:39 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	char	eof;

	eof = '\n';
	ft_putstr_fd(s, fd);
	write(fd, &eof, 1);
}