/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:50:47 by acherraq          #+#    #+#             */
/*   Updated: 2023/11/28 22:49:31 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int i;

	i = 0;
	if (s == NULL || f== NULL)
		return;
	i = 0;
	while (s[i])
	{
		(*f)(i, s + i);	
		i++;
	}		
}
/*
void print_c( unsigned int i, char *s)
	{
		printf("this printable caractere: %c\n", *s);
	}

int main()
{
	char *s = "hello" ;
	char *r = "sh";
	ft_striteri(s,print_c);
}
*/
