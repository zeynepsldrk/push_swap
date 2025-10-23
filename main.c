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
		

			
		double stack_a[ac - 1];
		int i = 0;
		int len;
		len = ac - 1;
		while (i < len)
		{
			stack_a[i] = *av[ac - 1];
			ac--;
			i++;
		}
	}
	else
		return (0);
}