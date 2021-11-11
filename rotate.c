/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:39:05 by nosterme          #+#    #+#             */
/*   Updated: 2021/11/11 15:51:53 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	rotate(t_list **head, t_list **tail)
{
	t_list	*second;

	if (*head != 0 && (*head)->next != 0)
	{
		second = (*head)->next;
		(*head)->next = 0;
		(*tail)->next = *head;
		*tail = *head;
		*head = second;
	}
}
