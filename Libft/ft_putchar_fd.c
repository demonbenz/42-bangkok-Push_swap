/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 23:07:39 by otangkab          #+#    #+#             */
/*   Updated: 2022/06/28 23:12:24 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"unistd.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}