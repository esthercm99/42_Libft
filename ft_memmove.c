/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastane <ecastane@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:52:28 by ecastane          #+#    #+#             */
/*   Updated: 2023/09/11 17:52:28 by ecastane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Allows copying between objects that might overlap.
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	ft_memcpy(dst, src, len);
	src = NULL;
	return (dst);
}
