/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_bits.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:15:24 by nosterme          #+#    #+#             */
/*   Updated: 2021/11/10 11:37:16 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	ft_1_byte(int elemc)
{
	if (elemc <= 2)
		return (1);
	else if (elemc <= 4)
		return (2);
	else if (elemc <= 8)
		return (3);
	else if (elemc <= 16)
		return (4);
	else if (elemc <= 32)
		return (5);
	else if (elemc <= 64)
		return (6);
	else if (elemc <= 128)
		return (7);
	else
		return (8);
}

int	ft_2_bytes(int elemc)
{
	if (elemc <= 256)
		return (ft_1_byte(elemc));
	else if (elemc <= 512)
		return (9);
	else if (elemc <= 1024)
		return (10);
	else if (elemc <= 2048)
		return (11);
	else if (elemc <= 4096)
		return (12);
	else if (elemc <= 8192)
		return (13);
	else if (elemc <= 16384)
		return (14);
	else if (elemc <= 32768)
		return (15);
	else
		return (16);
}

int	ft_3_bytes(int elemc)
{
	if (elemc <= 65536)
		return (ft_2_bytes(elemc));
	else if (elemc <= 131072)
		return (17);
	else if (elemc <= 262144)
		return (18);
	else if (elemc <= 524288)
		return (19);
	else if (elemc <= 1048576)
		return (20);
	else if (elemc <= 2097152)
		return (21);
	else if (elemc <= 4194304)
		return (22);
	else if (elemc <= 8388608)
		return (23);
	else
		return (24);
}

int	ft_4_bytes(int elemc)
{
	if (elemc <= 16777216)
		return (ft_3_bytes(elemc));
	else if (elemc <= 33554432)
		return (25);
	else if (elemc <= 67108864)
		return (26);
	else if (elemc <= 134217728)
		return (27);
	else if (elemc <= 268435456)
		return (28);
	else if (elemc <= 536870912)
		return (29);
	else if (elemc <= 1073741824)
		return (30);
	else
		return (31);
}
