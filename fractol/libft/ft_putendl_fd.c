/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgretic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:34:21 by bgretic           #+#    #+#             */
/*   Updated: 2024/04/26 12:46:35 by bgretic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t len;

	len = ft_strlen(s);
	write(fd, s, len);
	write(fd, "\n", 1);
}

//test
/*
int main(void)
{
	char	*test;

	test = "Hello Friene!";
	ft_putendl_fd(test, 1);
}
*/
