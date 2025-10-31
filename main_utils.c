/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 15:08:21 by zedurak           #+#    #+#             */
/*   Updated: 2025/10/31 15:56:56 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(int *stack_a, int size)
{
	while (size > 0)
	{
		if (!(stack_a[size] < stack_a[size - 1]))
			return (0);
		size--;
	}
	return (1);
}

void	fill_stack_a(int *stack_a, char **av, int ac)
{
	int	i;
	int	len;

	i = 0;
	len = ac - 1;
	while (i < len)
	{
		stack_a[i] = *av[ac - 1];
		ac--;
		i++;
	}
}

void	open_heap(int ac, int *stack_a_or_b)
{
	stack_a_or_b = (int *)malloc(ac * sizeof(int));
	if (!stack_a_or_b)
		return (0);
}

