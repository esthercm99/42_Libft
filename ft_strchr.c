/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastane <ecastane@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 22:08:57 by ecastane          #+#    #+#             */
/*   Updated: 2023/09/13 22:08:57 by ecastane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 	
*	Searches for the first occurrence of the character c (an unsigned char) 
*	in the string pointed to by the argument str.
*
*	Returns a pointer to the first occurrence of the character c 
*	in the string str, or NULL if the character is not found.
*/
char	*ft_strchr(const char *s, int c)
{
	char	temp_c;
	char	*temp_s;
	int		i;

	i = 0;
	temp_s = (char *)s;
	temp_c = c;
	while (temp_s[i] != temp_c)
	{
		if (temp_s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)temp_s + i);
}
