/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastane <ecastane@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:52:37 by ecastane          #+#    #+#             */
/*   Updated: 2023/09/11 17:52:37 by ecastane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Determines the length of string excluding the ending null character. 
* The function returns the length of string.
*/
size_t	ft_strlen(const char *str)
{
	size_t		len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
