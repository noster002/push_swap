/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:36:01 by nosterme          #+#    #+#             */
/*   Updated: 2021/11/11 13:50:06 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_push_b_big(t_list **stack_a, t_list **stack_b, int count, int elemc)
{
	t_list	*tail_a;

	while (elemc > 0)
	{
		tail_a = ft_lstlast(*stack_a);
		if ((((*(int *)(*stack_a)->content) >> count) & 1) == 1)
		{
			rotate(stack_a, &tail_a);
			write(1, "ra\n", 3);
		}
		else
		{
			push(stack_a, stack_b);
			write(1, "pb\n", 3);
		}
		elemc--;
	}
}

void	ft_push_a(t_list **stack_a, t_list **stack_b)
{
	while (*stack_b != 0)
	{
		push(stack_b, stack_a);
		write(1, "pa\n", 3);
	}
}

void	ft_sort_big_stack(t_list **stack_a, int elemc)
{
	t_list	**stack_b;
	int		nbr_bits;
	int		count;

	stack_b = (t_list **)malloc(sizeof(t_list *));
	*stack_b = 0;
	nbr_bits = ft_4_bytes(elemc);
	count = 0;
	while (count < nbr_bits)
	{
		ft_push_b_big(stack_a, stack_b, count, elemc);
		ft_push_a(stack_a, stack_b);
		count++;
	}
	free(stack_b);
}
