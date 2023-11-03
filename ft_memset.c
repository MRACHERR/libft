/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <acherraq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:09:25 by acherraq          #+#    #+#             */
/*   Updated: 2023/11/02 21:54:09 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)str;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
/*int main()
{
	char str[100] = "1337";
	printf("%s\n", str);
	printf("%s\n", ft_memset(str, 'a', 5));
	printf("%s\n", str);
}
*/
