/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgretic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:11:41 by bgretic           #+#    #+#             */
/*   Updated: 2024/04/29 11:16:03 by bgretic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memp;

	if (!nmemb || !size)
		return (malloc(0));
	if (nmemb * size <= SIZE_MAX)
	{
		memp = malloc(nmemb * size);
		if (memp == NULL)
			return (NULL);
		ft_bzero(memp, nmemb * size);
	}
	else
		return (NULL);
	return (memp);
}

//test
/*
#include <stdio.h>

int main(void)
{
	char	*test = "Hello World!";

	printf("%p\n", test);
	printf("%s\n", test);
	
	test = ft_calloc(13, sizeof(char));
	
	printf("%p\n", test);
	printf("%s\n", test);
	free(test);
}
*/