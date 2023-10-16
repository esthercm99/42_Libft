/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastane <ecastane@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 22:04:18 by ecastane          #+#    #+#             */
/*   Updated: 2023/09/13 22:04:18 by ecastane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Searches for the first occurrence of the character c (an unsigned char) 
*	in the first n bytes of the string pointed to, by the argument str.
*	
*	Returns a pointer to the matching byte or NULL if the character 
*	does not occur in the given memory area.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*alts;
	size_t			i;

	alts = (unsigned char *)s;
	i = 0;
	while (n > i)
	{
		if (alts[i] == (unsigned char)c)
			return (&alts[i]);
		i++;
	}
	return (NULL);
}
