/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:03:58 by nosterme          #+#    #+#             */
/*   Updated: 2021/11/11 15:45:36 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(int argc, char **argv)
{
	t_list	**stack;

	if (ft_input_is_valid(argc - 1, argv))
	{
		stack = (t_list **)malloc(sizeof(t_list *));
		*stack = ft_simplified_stack(argc, argv);
		if (!(ft_stack_is_sorted(*stack)))
		{
			if ((argc - 1) <= 5)
				ft_sort_small_stack(stack, argc - 1);
			else
				ft_sort_big_stack(stack, argc - 1);
		}
		ft_free_stack(stack);
		free(stack);
	}
	else
		write(2, "Error\n", 6);
	return (0);
}
