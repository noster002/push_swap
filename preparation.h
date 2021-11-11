/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preparation.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:27:33 by nosterme          #+#    #+#             */
/*   Updated: 2021/11/09 16:04:08 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PREPARATION_H
# define PREPARATION_H
# include "boolean.h"

t_bool	ft_input_is_valid(int cnt_str, char **string);
t_list	*ft_simplified_stack(int max, char **string);

#endif