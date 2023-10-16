/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastane <ecastane@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:52:32 by ecastane          #+#    #+#             */
/*   Updated: 2023/09/11 17:52:32 by ecastane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	It's used to fill a block of memory with a particular value.
*/
void	*ft_memset(void *b, int c, size_t len)
{
	char	*ph;

	ph = (char *)b;
	while (len > 0)
	{
		ph[len - 1] = c;
		len--;
	}
	return (b);
}
