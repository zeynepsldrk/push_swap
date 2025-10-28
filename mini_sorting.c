/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sorting.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:54:56 by zedurak           #+#    #+#             */
/*   Updated: 2025/10/28 19:37:20 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_pos(int stack_a[], int index_a)
{
	int	temp;
	int	pos;

	pos = index_a;
	temp = stack_a[index_a];
	while (index_a >= 0)
	{
		if (temp > stack_a[index_a])
		{
			temp = stack_a[index_a];
			pos = index_a;
		}
		index_a--;
	}
	return (pos);
}

void	two_elements_sorting(int stack_a[], int index_a)
{
	if (stack_a[index_a] > stack_a[index_a - 1])
		sa(stack_a, index_a);
}

void	three_elements_sorting(int stack_a[], int index_a)
{
	int	top;
	int	second;
	int	third;

	top = stack_a[index_a];
	second = stack_a[index_a - 1];
	third = stack_a[index_a - 2];
	if (top < second && second > third && top > third)
		ra(stack_a, index_a);
	else if (top > second && second < third && top < third)
		sa(stack_a, index_a);
	else if (top < second && second > third && top < third)
	{
		ra(stack_a, index_a);
		sa(stack_a, index_a);
	}
	else if (top > second && second < third && top > third)
		rra(stack_a, index_a);
	else if (top > second && second > third && top > third)
	{
		rra(stack_a, index_a);
		sa(stack_a, index_a);
	}
}

void	four_elements_sorting(int stack_a[], int stack_b[], int index_a, int index_b)
{
	int	min_pos;

	if ((index_a + 1) == 4)
	{
		min_pos = find_min_pos(stack_a, index_a);
		while (min_pos != index_a)
		{
			if (min_pos > (index_a / 2))
				ra(stack_a, index_a);
			else
				rra(stack_a, index_a);
			min_pos = find_min_pos(stack_a, index_a);
		}
		pb(stack_a, stack_b, index_a, index_b);
		three_elements_sorting(stack_a, index_a);
		pa(stack_a, stack_b, index_a, index_b);
	}
}

void	five_elements_sorting(int stack_a[], int stack_b[], int index_a, int index_b)
{
	int	min_pos;

	if ((index_a + 1) == 5)
	{
		min_pos = find_min_pos(stack_a, index_a);
		while (min_pos != index_a)
		{
			if (min_pos > (index_a / 2))
				ra(stack_a, index_a);
			else
				rra(stack_a, index_a);
			min_pos = find_min_pos(stack_a, index_a);
		}
		pb(stack_a, stack_b, index_a, index_b);
		four_elements_sorting(stack_a, stack_b, index_a, index_b);
		pa(stack_a, stack_b, index_a, index_b);
	}
}
