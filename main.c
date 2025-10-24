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

void	start_push_swap(char **av, int ac)
{
	int	stack_a[ac - 1];
	int	stack_b[ac - 1];
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
