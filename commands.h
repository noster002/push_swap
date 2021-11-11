/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:00:17 by nosterme          #+#    #+#             */
/*   Updated: 2021/11/11 15:51:36 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMANDS_H
# define COMMANDS_H

void	swap(t_list **head);
void	push(t_list **head_from, t_list **head_to);
void	rotate(t_list **head, t_list **tail);
void	reverse_rotate(t_list **head, t_list **tail);

#endif