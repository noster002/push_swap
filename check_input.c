/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:33:20 by nosterme          #+#    #+#             */
/*   Updated: 2021/11/11 15:50:11 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static t_bool	ft_input_comp(int nbr_input, char **input)
{
	int	count1;
	int	count2;

	count1 = 1;
	while (count1 < nbr_input)
	{
		count2 = count1 + 1;
		while (count2 <= nbr_input)
		{
			if (ft_strlen(input[count1]) - ft_strlen(input[count2]) == 0)
			{
				if (ft_strncmp(input[count1], input[count2], \
					ft_strlen(input[count1])) == 0)
					return (false);
			}
			count2++;
		}
		count1++;
	}
	return (true);
}

static t_bool	ft_is_int(char *string)
{
	if (string[0] == '-')
	{
		if ((ft_strlen(string) < ft_strlen("-2147483648")))
			return (true);
		else if ((ft_strlen(string) == ft_strlen("-2147483648")) && \
				(ft_strncmp(string, "-2147483648", 11) <= 0))
			return (true);
		else
			return (false);
	}
	else if (ft_isdigit(string[0]))
	{
		if ((ft_strlen(string) < ft_strlen("2147483647")))
			return (true);
		else if ((ft_strlen(string) == ft_strlen("2147483647")) && \
				(ft_strncmp(string, "2147483647", 10) <= 0))
			return (true);
		else
			return (false);
	}
	else
		return (false);
}

t_bool	ft_input_is_valid(int nbr_input, char **input)
{
	int	cnt_str;
	int	cnt_chr;

	cnt_str = 1;
	if (nbr_input == 0)
		exit (0);
	while (cnt_str <= nbr_input)
	{
		cnt_chr = 0;
		if (ft_is_int(input[cnt_str]) == false)
			return (false);
		if (input[cnt_str][0] == '-')
			cnt_chr++;
		while (ft_isdigit(input[cnt_str][cnt_chr]))
			cnt_chr++;
		if (input[cnt_str][cnt_chr] == 0)
			cnt_str++;
		else
			return (false);
	}
	return (ft_input_comp(nbr_input, input));
}
