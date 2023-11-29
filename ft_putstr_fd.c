/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:08:27 by acherraq          #+#    #+#             */
/*   Updated: 2023/11/29 16:57:53 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return;
	write(fd, s, ft_strlen(s));
}
/*
int main()
{
	ft_putstr_fd("hello world", 1);
}
*/
