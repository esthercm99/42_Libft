/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastane <ecastane@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 22:30:30 by ecastane          #+#    #+#             */
/*   Updated: 2023/09/13 22:30:30 by ecastane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Find the last occurrence of a character in a string */
char	*ft_strrchr(const char *str, int charac)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)charac)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}
