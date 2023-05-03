/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pp.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:14:56 by lpeeters          #+#    #+#             */
/*   Updated: 2023/05/03 17:18:06 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*pushes top item of stack b to top of stack a*/

void	pa(t_node **stack_a, t_node **stack_b)
{
	t_node	*dest;
	t_node	*src;

	if (*stack_b == NULL)
		return ;
	dest = *stack_b;
	src = *stack_a;
	*stack_a = dest;
	*stack_b = dest->next;
	dest->next = src;
	write(1, "pa\n", 3);
}

/*pushes top item of stack a to top of stack b*/

void	pb(t_node **stack_b, t_node **stack_a)
{
	t_node	*dest;
	t_node	*src;

	if (*stack_a == NULL)
		return ;
	dest = *stack_a;
	src = *stack_b;
	*stack_b = dest;
	*stack_a = dest->next;
	dest->next = src;
	write(1, "pb\n", 3);
}
