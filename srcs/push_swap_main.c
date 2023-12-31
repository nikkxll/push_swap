/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnikifor <dnikifor@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:31:39 by dnikifor          #+#    #+#             */
/*   Updated: 2023/12/09 15:14:15 by dnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char *argv[])
{
	t_ps	*stack_a;

	stack_a = push_swap(argc, argv);
	if (!stack_a)
		return (0);
	free(stack_a->array);
	free(stack_a);
	return (0);
}
