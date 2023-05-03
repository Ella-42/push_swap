/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:39:13 by lpeeters          #+#    #+#             */
/*   Updated: 2023/05/03 18:43:45 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*add next node*/

void	add_node(t_node **stack_a, t_node **current, t_node *new_node)
{
	if (*stack_a == NULL)
	{
		*stack_a = new_node;
		*current = *stack_a;
	}
	else
	{
		(*current)->next = new_node;
		*current = new_node;
	}
}

/*converts input into a linked list*/

t_node	*ft_lla(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*current;
	t_node	*new_node;
	int		i;

	i = 0;
	stack_a = NULL;
	current = NULL;
	while (++i < ac)
	{
		new_node = (t_node *)malloc(sizeof(t_node));
		if (!new_node)
		{
			free_ll(stack_a);
			exit(1);
		}
		new_node->val = ft_atoi(av[i]);
		new_node->index = -1;
		new_node->next = NULL;
		add_node(&stack_a, &current, new_node);
	}
	return (stack_a);
}

/*create empty linked list*/

t_node	*ft_llb(void)
{
	t_node	*stack_b;

	stack_b = NULL;
	return (stack_b);
}

/*free stack's memory*/

void	free_ll(t_node *stack)
{
	t_node	*current;
	t_node	*next;

	current = stack;
	while (current != NULL)
	{
		next = current->next;
		free (current);
		current = next;
	}
}
