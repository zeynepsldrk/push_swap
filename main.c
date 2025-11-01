/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:26:56 by zedurak           #+#    #+#             */
/*   Updated: 2025/11/01 13:30:11 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	go_sort(int ac, int *stack_a, int *stack_b)
{
	int	index_a;
	int	index_b;

	index_a = ac - 2;
	index_b = -1;
	if (ac - 1 == 2)
		two_elements_sorting(stack_a, index_a);
	else if (ac - 1 == 3)
		three_elements_sorting(stack_a, index_a);
	else if (ac - 1 == 4)
		four_elements_sorting(stack_a, stack_b, index_a, index_b);
	else if ((ac - 1 >= 5) && (ac - 1 <= 10))
		small_elements_sorting(stack_a, stack_b, index_a, index_b);
	else
		boss_sorting(stack_a, stack_b, index_a, index_b);
}

void	start_push_swap(char **av, int ac)
{
	int	*stack_a;
	int	*stack_b;

	open_heap(ac, stack_a);
	open_heap(ac, stack_b);
	fill_stack_a(stack_a, av, ac);
	if (is_sorted(stack_a, ac - 1))
		return ;
	go_sort(ac, stack_a, stack_b);
	free(stack_a);
	free(stack_b);
}

void	organize_arg(int ac, char **av, char *joined, char *temp)
{
	int	i;

	i  = 1;
	while (i < ac)
	{
		temp = ft_strjoin(joined, " ");
		free(joined);
		if (!temp)
			return (NULL);
		joined = ft_strjoin(temp, av[i]);
		free(temp);
		if (!joined)
			return (NULL);
		i++;
	}
}

char	**merge_arg(char **av, int ac)
{
	char	**final_stack;
	char	*temp;
	char	*joined;

	joined = ft_strdup("");
	if (!joined)
		return (NULL);
	organize_arg(ac, av, joined, temp);
	final_stack = ft_split(joined, ' ');
	free(joined);
	return (final_stack);
}

int	main(int ac, char **av)
{
	if (ac >= 2)
	{
		char	**slice_arg;

		slice_arg = merge_arg(av, ac);
		if ((!slice_arg) || !arg_check(slice_arg, ft_strlen(*slice_arg)))
			print_error();
		else
			start_push_swap(slice_arg, ft_strlen(*slice_arg));
		free_all_arg_staff(slice_arg);
	}
	else
		return (0);
}
