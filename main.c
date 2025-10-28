/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:26:56 by zedurak           #+#    #+#             */
/*   Updated: 2025/10/28 19:39:34 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(int stack_a[], int size)
{
	while (size > 0)
	{
		if (!(stack_a[size] < stack_a[size - 1]))
			return (0);
		size--;
	}
	return (1);
}

void	fill_stack_a(int stack_a[], char **av, int ac)
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

void	start_push_swap(char **av, int ac)
{
	int	stack_a[ac - 1];
	int	stack_b[ac - 1];
	int	index_a;
	int	index_b;

	index_a = ac - 2;
	index_b = -1;
	fill_stack_a(stack_a, av, ac);
	if (is_sorted(stack_a, ac - 1))
		return ;
	if (ac - 1 == 2)
		two_elements_sorting(stack_a, index_a);
	else if (ac - 1 == 3)
		three_elements_sorting(stack_a, index_a, stack_b, index_b);
	else if (ac - 1 == 4)
		four_elements_sorting(stack_a, stack_b, index_a, index_b);
	else if (ac - 1 == 5)
		five_elements_sorting(stack_a, stack_b, index_a, index_b);
	else
		boss_sorting(stack_a, stack_b, index_a, index_b);
}

int	main(int ac, char **av)
{
	if (ac > 2)
	{
		if (!arg_check(av, ac))
			print_error();
		else
			start_push_swap(av, ac);
	}
	else if (ac == 2)
	{
		char	**slice_arg;

		slice_arg = ft_split(av[1], ' ');
		if (!arg_check(slice_arg, ft_strlen(*slice_arg)))
			print_error();
		else
			start_push_swap(av, ac);
	}
	else
		return (0);
}
