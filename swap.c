/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:04:15 by nosterme          #+#    #+#             */
/*   Updated: 2021/11/11 15:51:46 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	swap(t_list **head)
{
	t_list	*second;

	second = (*head)->next;
	if (*head != 0 || second != 0)
	{
		(*head)->next = second->next;
		second->next = *head;
		*head = second;
	}
}
