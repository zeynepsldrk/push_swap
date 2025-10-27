/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_func.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:58:44 by zedurak           #+#    #+#             */
/*   Updated: 2025/10/26 20:17:59 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(int stack_a[], int index_a)
{
	int	temp;
	int	i;

	if (index_a <= 0)
		return ;
	temp = stack_a[index_a];
	i = index_a;
	while (i >= 0)
	{
		stack_a[i + 1] = stack_a[i];
		i--;
	}
	stack_a[0] = temp;
	write(1, "rra\n", 4);
}

void	rrb(int stack_b[], int index_b)
{
	int	temp;
	int	i;

	if (index_b <= 0)
		return ;
	temp = stack_b[index_b];
	i = index_b;
	while (i >= 0)
	{
		stack_b[i + 1] = stack_b[i];
		i--;
	}
	stack_b[0] = temp;
	write(1, "rrb\n", 4);
}

void	rrr(int stack_a[], int stack_b[], int index_a, int index_b)
{
	rra(stack_a, index_a);
	rra(stack_b, index_b);
	write(1, "rrr\n", 4);
}