/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgretic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:16:07 by bgretic           #+#    #+#             */
/*   Updated: 2024/07/24 12:16:16 by bgretic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stk_a;
	t_list	*stk_b;

	if (ac < 2)
		exit(-1);
	check_form((const char **)av);
	stk_a = NULL;
	stk_b = NULL;
	if (ac == 2)
		stk_a = split_into_list(av[1]);
	else if (ac > 2)
		stk_a = get_list(ac, av);
	if (!stk_a)
		return (ft_lstclear(&stk_a), -1);
	if (is_sorted(stk_a))
		return (ft_lstclear(&stk_a), 0);
	if (ft_lstsize(stk_a) <= 5)
		small_sort(&stk_a, &stk_b);
	else
		sort_it(&stk_a, &stk_b);
	ft_lstclear(&stk_a);
	return (0);
}
