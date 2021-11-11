/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:25:03 by nosterme          #+#    #+#             */
/*   Updated: 2021/11/05 13:38:34 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	push(t_list **head_from, t_list **head_to)
{
	t_list	*second_from;

	second_from = (*head_from)->next;
	if (*head_from != 0)
	{
		(*head_from)->next = *head_to;
		*head_to = *head_from;
		*head_from = second_from;
	}
}
