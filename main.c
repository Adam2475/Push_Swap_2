/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 01:00:00 by adapassa          #+#    #+#             */
/*   Updated: 2024/04/17 13:46:02 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	free_list(t_list *head)
{
	t_list	*current;
	t_list	*next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

int main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	**tmp;
	int		i;

	stack_a = NULL;
	stack_b = NULL;
	i = 0;

	if (ac < 2)
		return(write(1, "arg error\n", 10));

	tmp = parse_args(av, ac);

	stack_a = ft_lstnew(tmp[i++]);
	while (tmp[i] != (void *)0)
		ft_lstadd_back(&stack_a, ft_lstnew(av[i++]));

	free_list(stack_a);
	free_matrix(tmp);
	return (0);
}
