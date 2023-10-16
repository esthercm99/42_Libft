/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastane <ecastane@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:00:37 by ecastane          #+#    #+#             */
/*   Updated: 2023/09/16 17:06:42 by ecastane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Send the character 'c' to the file descriptor
*	specified.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
