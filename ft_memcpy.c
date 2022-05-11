/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulikhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:46:33 by sulikhan          #+#    #+#             */
/*   Updated: 2022/03/16 15:59:16 by sulikhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	unsigned int	i;
	unsigned char	*dest;
	unsigned char	*str;

	if (str1 == NULL && str2 == NULL)
		return (NULL);
	i = 0;
	dest = (unsigned char *)str1;
	str = (unsigned char *)str2;
	while (i < n)
	{
		*((char *)dest + i) = *((char *)str + i);
		i++;
	}
	return (dest);
}
