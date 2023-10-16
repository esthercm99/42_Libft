/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastane <ecastane@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:52:00 by ecastane          #+#    #+#             */
/*   Updated: 2023/09/11 17:52:00 by ecastane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Erases the data in the n bytes of the memory
*	starting at the location pointed to by s, by writing zeros to that area.
*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
