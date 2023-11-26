/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:43:12 by acherraq          #+#    #+#             */
/*   Updated: 2023/11/26 15:01:04 by acherraq         ###   ########.fr       */
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
*ft_itoa(int n)
{
		

}

int main()
{


}
