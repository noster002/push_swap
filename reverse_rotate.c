/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:48:28 by nosterme          #+#    #+#             */
/*   Updated: 2021/11/11 15:52:02 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static t_list	*lst_second_last(t_list *head)
{
	while (head->next->next != 0)
		head = head->next;
	return (head);
}

void	reverse_rotate(t_list **head, t_list **tail)
{
	t_list	*second_last;

	if (*head != 0 && *head != *tail)
	{
		second_last = lst_second_last(*head);
		second_last->next = 0;
		(*tail)->next = *head;
		*head = *tail;
		*tail = second_last;
	}
}
