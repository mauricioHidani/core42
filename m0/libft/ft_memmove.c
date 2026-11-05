/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:45:51 by mhidani           #+#    #+#             */
/*   Updated: 2025/07/24 15:49:11 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst > src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			(unsigned char *)dst[i] = (unsigned char *)src[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			(unsigned char *)dst[i] = (unsigned char *)src[i];
			i++;
		}
	}
	return (dst);
}
