/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastane <ecastane@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 22:34:33 by ecastane          #+#    #+#             */
/*   Updated: 2023/09/13 22:34:33 by ecastane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Locate a substring in a string */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	int			l_substr;
	char		*str;
	char		*substr;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	str = (char *)big;
	substr = (char *)little;
	l_substr = ft_strlen(substr);
	while (str[i] != '\0' && (i + l_substr) <= len)
	{
		if (ft_strncmp((str + i), substr, l_substr) == 0)
			return (str + i);
		i++;
	}
	return (NULL);
}
