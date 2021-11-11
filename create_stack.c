/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:24:55 by nosterme          #+#    #+#             */
/*   Updated: 2021/11/10 11:27:39 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static void	ft_stack_sort_element(t_list **stack, t_list *element)
{
	t_list	*tmp;

	tmp = *stack;
	if (*stack == 0)
		*stack = element;
	else if (*(int *)element->content < *(int *)(*stack)->content)
		ft_lstadd_front(stack, element);
	else if (*(int *)element->content > *(int *)(*stack)->content)
	{
		while (*(int *)element->content > *(int *)tmp->content)
		{
			if (tmp->next == 0)
				tmp->next = element;
			if (*(int *)element->content < *(int *)tmp->next->content)
			{
				element->next = tmp->next;
				tmp->next = element;
			}
			tmp = tmp->next;
		}
	}
}

static t_list	*ft_stack_new(int nbr_elements, char **string, t_bool sort)
{
	t_list	*stack;
	t_list	*element;
	int		*content;
	int		count;

	stack = 0;
	count = 1;
	while (count < nbr_elements)
	{
		content = (int *)malloc(sizeof(int));
		*content = ft_atoi(string[count]);
		element = ft_lstnew(content);
		if (sort)
			ft_stack_sort_element(&stack, element);
		else if (!sort)
			ft_lstadd_back(&stack, element);
		count++;
	}
	return (stack);
}

static void	ft_stack_simplify_nbrs(t_list **stack_a, t_list *stack_sorted)
{
	t_list	*tmp_a;
	t_list	*tmp_sorted;
	int		count;

	tmp_a = *stack_a;
	while (tmp_a != 0)
	{
		tmp_sorted = stack_sorted;
		count = 0;
		while (*(int *)tmp_a->content != *(int *)tmp_sorted->content)
		{
			tmp_sorted = tmp_sorted->next;
			count++;
		}
		if (*(int *)tmp_a->content == *(int *)tmp_sorted->content)
		{
			*(int *)tmp_a->content = count;
			tmp_a = tmp_a->next;
		}
	}
}

t_list	*ft_simplified_stack(int nbr_elements, char **string)
{
	t_list	*stack_a;
	t_list	*stack_sorted;

	stack_a = ft_stack_new(nbr_elements, string, false);
	stack_sorted = ft_stack_new(nbr_elements, string, true);
	ft_stack_simplify_nbrs(&stack_a, stack_sorted);
	ft_free_stack(&stack_sorted);
	return (stack_a);
}
