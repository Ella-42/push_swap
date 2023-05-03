/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   master_error_check.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:11:10 by lpeeters          #+#    #+#             */
/*   Updated: 2023/05/03 18:00:59 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*checks linked list for duplicates*/

int	ft_lldup(t_node **stack)
{
	t_node	*current;
	t_node	*compare;

	current = *stack;
	while (current != NULL)
	{
		compare = current->next;
		while (compare != NULL)
		{
			if (current->val == compare->val)
				return (1);
			compare = compare->next;
		}
		current = current->next;
	}
	return (0);
}

/*check input for errors*/

int	ft_error_check(int ac, char **av)
{
	size_t	j;

	if (ac <= 1)
		return (1);
	j = 1;
	while (av[j] != NULL)
	{
		if (!ft_isint(av[j]))
		{
			write(1, "Error\n", 6);
			return (1);
		}
		j++;
	}
	return (0);
}
