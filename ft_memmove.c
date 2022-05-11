/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulikhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:25:10 by sulikhan          #+#    #+#             */
/*   Updated: 2022/04/12 16:25:19 by sulikhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	ptr = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	i = 0;
	if (!ptr && !ptr2)
		return (NULL);
	if (ptr2 < ptr)
		while (++i <= len)
			ptr[len - i] = ptr2[len - i];
	else
		while (len-- > 0)
			*(ptr++) = *(ptr2++);
	return (dst);
}
