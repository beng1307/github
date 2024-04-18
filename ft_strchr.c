/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgretic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:57:39 by bgretic           #+#    #+#             */
/*   Updated: 2024/04/18 15:26:57 by bgretic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(char *str, int c)
{
	while (*str)
	{
		if (*str == c)
		{
			return (str);
		}
		str++;
	}
	if (c == '\0')
		return (str + 1);
	return (0);
}

//test
/*
#include <stdio.h>

int	main(void)
{
	char	test[25] = "Test string!";
	char	*test2 = ft_strchr(test, 'z');

	if (test2 != 0)
	{
		printf("%s", test2);
	}
	else if (test2 == 0)
	{
		printf("The result is NULL");
	}
}
*/
