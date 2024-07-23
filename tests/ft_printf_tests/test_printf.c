/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgretic <bgretic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:39:42 by bgretic           #+#    #+#             */
/*   Updated: 2024/05/22 12:35:21 by bgretic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	test;

	test = 0;
	printf("\n");
	printf("%d\n", printf("Real Printf: %d\n", test));
	printf("\n");
	printf("%d\n", ft_printf("Bens Printf: %d\n", test));
	printf("\n");
}
