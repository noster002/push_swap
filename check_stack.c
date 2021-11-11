/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:04:42 by nosterme          #+#    #+#             */
/*   Updated: 2021/11/09 17:02:21 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

t_bool	ft_stack_is_sorted(t_list *stack)
{
	while (stack->next != 0)
	{
		if (*(int *)stack->content < *(int *)stack->next->content)
			stack = stack->next;
		else
			return (false);
	}
	return (true);
}
