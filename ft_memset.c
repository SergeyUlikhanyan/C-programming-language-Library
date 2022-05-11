/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulikhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 15:17:30 by sulikhan          #+#    #+#             */
/*   Updated: 2022/04/03 15:17:41 by sulikhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	size_t			i;
	unsigned char	*buf;

	i = 0;
	buf = (unsigned char *)ptr;
	while (i < n)
	{
		buf[i] = x;
		i++;
	}
	return (ptr = buf);
}
