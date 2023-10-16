/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastane <ecastane@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 22:00:41 by ecastane          #+#    #+#             */
/*   Updated: 2023/09/13 22:00:41 by ecastane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	The function copies count bytes of src to dest. 
*	The behavior is undefined if copying takes place between objects that overlap
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*temp_dest;
	unsigned char	*temp_src;

	if (!dst && !src)
		return (0);
	i = 0;
	temp_dest = (unsigned char *)dst;
	temp_src = (unsigned char *)src;
	if (dst < src)
	{
		while (i < n)
		{
			temp_dest[i] = temp_src[i];
			i++;
		}
	}
	if (dst > src)
	{
		while (n--)
			temp_dest[n] = temp_src[n];
	}
	return (dst);
}
