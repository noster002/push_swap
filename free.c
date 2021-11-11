/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:01:09 by nosterme          #+#    #+#             */
/*   Updated: 2021/11/08 22:53:11 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_free_stack(t_list **stack)
{
	t_list	*tmp;

	while (*stack != 0)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		free(tmp->content);
		free(tmp);
	}
	free(*stack);
}
