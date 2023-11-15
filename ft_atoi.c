/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:07:43 by acherraq          #+#    #+#             */
/*   Updated: 2023/11/15 20:22:15 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_space(char str)
{
	if (str == '\t' || str == ' ' || str == '\f'
		||str == '\n' || str == '\r' || str == '\v')
	{
		return (0);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	r;
	int	neg;
	
	i = 0;
	while (is_space(str[i]) == 0)
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		neg = str[i++];
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		r = r * 10 + (str[i] - 48);
		if (r < 0 && neg == '-' )
			return (0);
		else if (r < 0)
			return (-1);
		else
			i++;
	}
	if (neg == '-')
		r = r * -1;
	return (r);
}
/*
int main()
{
	char *s = "      -44343";
	printf("%d\n", ft_atoi(s));

}
*/
