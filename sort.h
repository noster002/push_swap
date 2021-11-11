/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:29:41 by nosterme          #+#    #+#             */
/*   Updated: 2021/11/11 14:02:07 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_H
# define SORT_H
# include "commands.h"
# include "nbr_bits.h"
# include "boolean.h"

void	ft_sort_big_stack(t_list **stack_a, int elemc);
void	ft_sort_small_stack(t_list **stack_a, int elemc);
void	ft_push_b_big(t_list **stack_a, t_list **stack_b, int count, int elemc);
void	ft_push_b_small(t_list **a, t_list **b, t_list	**tail_a, int elemc);
void	ft_push_a(t_list **stack_a, t_list **stack_b);
void	ft_stack_contains_3(t_list **stack, t_list	**tail, int count);
t_bool	ft_stack_is_sorted(t_list *stack);

#endif