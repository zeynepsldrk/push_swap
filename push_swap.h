/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 20:16:14 by zedurak           #+#    #+#             */
/*   Updated: 2025/10/28 19:41:46 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <unistd.h>

int	is_number(char *str);
int	is_duplicate(char **av);
int	arg_check(char **av, int ac);
void	print_error();
char	**ft_split(char const *s, char c);
int	ft_atoi(const char *str);
int	ft_strcmp(const char *s1, const char *s2);
size_t	ft_strlen(const char *s);
void	pa(int stack_a[], int stack_b[], int index_a, int index_b);
void	pb(int stack_a[], int stack_b[], int index_a, int index_b);
void	rra(int stack_a[], int index_a);
void	rrb(int stack_b[], int index_b);
void	rrr(int stack_a[], int stack_b[], int index_a, int index_b);
void	ra(int stack_a[], int index_a);
void	rb(int stack_b[], int index_b);
void	rr(int stack_a[], int stack_b[], int index_a, int index_b);
void	sa(int stack_a[], int index_a);
void	sb(int stack_b[], int index_b);
void	ss(int stack_a[], int stack_b, int index_a, int index_b);
int	find_min_pos(int stack_a[], int index_a);
void	two_elements_sorting(int stack_a[], int index_a);
void	three_elements_sorting(int stack_a[], int index_a);
void	four_elements_sorting(int stack_a[], int stack_b[], int index_a, int index_b);
void	five_elements_sorting(int stack_a[], int stack_b[], int index_a, int index_b);

#endif