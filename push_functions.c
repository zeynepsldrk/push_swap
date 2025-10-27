<<<<<<< HEAD
#include "push_swap.h"

void pa(int stack_a[], int stack_b[], int index_a, int index_b)
{
    if (index_b == -1)
        return ;
    stack_a[index_a + 1] = stack_b[index_b];
    stack_b[index_b] = 0;
}

void pb(int stack_a[], int stack_b[], int index_a, int index_b)
{
    if (index_a == -1)
        return ;
    stack_b[index_b + 1] = stack_a[index_a];
    stack_a[index_a] = 0;
}
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:58:40 by zedurak           #+#    #+#             */
/*   Updated: 2025/10/26 15:59:20 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

>>>>>>> f6651a2f9106373a7cec10366d1d390f7e25d637
