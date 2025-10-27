/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:26:56 by zedurak           #+#    #+#             */
/*   Updated: 2025/10/23 22:16:30 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_sorted(int stack_a[], int size)
{
    while (size > 0)
    {
        if (!(stack_a[size] < stack_a[size - 1]))
            return (0);
        size--;
    }
    return (1);
}

void fill_stack_a(int stack_a[], char **av, int ac)
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
    int size;

    size = ac - 1;
    if (is_sorted(stack_a, size))
        return ;
    fill_stack_a(stack_a, av, ac);
    if (size == 2)
        two_elements_sorting(stack_a);
    else if (size == 3)
        three_elements_sorting(stack_a);
    else if (size <= 5)
        less_elements_sorting(stack_a, stack_b);
    else
        boss_sorting(stack_a, stack_b);
}

int main(int ac, char **av)
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
		int		i;

		i = 0;
		slice_arg = ft_split(av[1], ' ');
		if (!arg_check(slice_arg, ft_strlen(*slice_arg)))
			print_error();
		else
			start_push_swap(av, ac);
	}
	else
		return (0);
}
