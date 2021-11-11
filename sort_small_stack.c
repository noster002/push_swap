/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:45:07 by nosterme          #+#    #+#             */
/*   Updated: 2021/11/11 14:30:09 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_stack_contains_3(t_list **stack, t_list	**tail, int elemc)
{
	int	count;

	count = 0;
	while (count < elemc)
	{
		if (*(int *)(*stack)->content == (elemc - 1) && elemc >= 3)
		{
			rotate(stack, tail);
			write(1, "ra\n", 3);
		}
		else if (*(int *)(*stack)->next->content == (elemc - 1) && elemc >= 3)
		{
			reverse_rotate(stack, tail);
			write(1, "rra\n", 4);
		}
		if (*(int *)(*stack)->content == (elemc - 2) || elemc == 2)
		{
			swap(stack);
			write(1, "sa\n", 3);
		}
		count++;
	}
}

void	ft_push_b_small(t_list **a, t_list **b, t_list	**tail_a, int elemc)
{
	int	count;

	count = 0;
	while (count < elemc)
	{
		if (*(int *)(*a)->content < (elemc - 3))
		{
			push(a, b);
			write(1, "pb\n", 3);
			if ((elemc == 4) || (elemc == 5 && (*b)->next != 0))
				break ;
		}
		else
		{
			rotate(a, tail_a);
			write(1, "ra\n", 3);
		}
		count++;
	}
}

void	ft_sort_small_stack(t_list **stack_a, int elemc)
{
	t_list	**stack_b;
	t_list	**tail_a;

	tail_a = (t_list **)malloc(sizeof(t_list *));
	stack_b = (t_list **)malloc(sizeof(t_list *));
	*tail_a = ft_lstlast(*stack_a);
	*stack_b = 0;
	if (elemc <= 3)
		ft_stack_contains_3(stack_a, tail_a, elemc);
	else
	{
		ft_push_b_small(stack_a, stack_b, tail_a, elemc);
		ft_stack_contains_3(stack_a, tail_a, elemc);
		ft_push_a(stack_a, stack_b);
		if (*(int *)(*stack_a)->content == 1)
		{
			swap(stack_a);
			write(1, "sa\n", 3);
		}
	}
	free(tail_a);
	free(stack_b);
}
