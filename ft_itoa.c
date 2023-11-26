/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:43:12 by acherraq          #+#    #+#             */
/*   Updated: 2023/11/26 15:23:43 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_l(long int n)
{
	long int len;
	int i;
	if (n >= 0)
		len = 0;
	else
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}
long int ft_abs(long int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
char	*ft_itoa(int n)
{
	int	l;
	char	*s;
	int		sign;

	l = ft_l(n);
	s = (char *)malloc(sizeof(char) * (l + 1));
	sign = (n > 0)? 1 : 0;
	if (!s)	
		return (NULL);
	s[l] = '\0';
	l--;	
	while (l >= 0)
	{
		s[l] = 48 + ft_abs(n % 10);
		n = n / 10;
		l--;
	}
	if (sign == 0)	
		s[0] = '-';
			
	return (s);
}
/*
int main()
{
	int	l;
	l = -100;
	printf("%s\n", ft_itoa(l));

}
*/
