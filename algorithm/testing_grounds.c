/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing_grounds.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:51:38 by lpeeters          #+#    #+#             */
/*   Updated: 2023/05/03 17:12:49 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*print the list's values*/

void	print_list(t_node **stack)
{
	t_node	*current;

	current = *stack;
	ft_printf("Linked list values stack: ");
	while (current != NULL)
	{
		ft_printf("%d ", current->val);
		current = current->next;
	}
	ft_printf("\n");
	ft_printf("Index stack: ");
	print_index(stack);
}

/*print the lists' values*/

void	print_lists(t_node **stack_a, t_node **stack_b)
{
	t_node	*current;

	current = *stack_a;
	ft_printf("Linked list values stack a: ");
	while (current != NULL)
	{
		ft_printf("%d ", current->val);
		current = current->next;
	}
	ft_printf("\n");
	ft_printf("Index stack a: ");
	print_index(stack_a);
	current = *stack_b;
	ft_printf("Linked list values stack b: ");
	while (current != NULL)
	{
		ft_printf("%d ", current->val);
		current = current->next;
	}
	ft_printf("\n");
	ft_printf("Index stack b: ");
	print_index(stack_b);
}

/*print the index of a list*/

void	print_index(t_node **stack)
{
	t_node	*current;

	current = *stack;
	while (current != NULL)
	{
		ft_printf("%d ", current->index);
		current = current->next;
	}
	ft_printf("\n");
}
