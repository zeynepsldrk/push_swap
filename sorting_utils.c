/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:26:01 by zedurak           #+#    #+#             */
/*   Updated: 2025/11/01 12:30:14 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	copy_array(int *copy, int *stack_a, int index_a)
{
	int	i;

	i = 0;
	while (i <= index_a)
	{
		copy[i] = stack_a[i];
		i++;
	}
}

void	index_stack(int *stack_a, int index_a)
{
	int	*copy;
	int	i;
	int	j;
	int	rank;

	open_heap((index_a + 2), copy);
	copy_array(copy, stack_a, index_a);
	i = 0;
	while (i <= index_a)
	{
		rank = 0;
		j = 0;
		while (j <= index_a)
		{
			if (copy[j] < copy[i])
				rank++;
			j++;
		}
		stack_a[i] = rank;
		i++;
	}
	free(copy);
}
