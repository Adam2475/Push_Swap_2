/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 01:00:00 by adapassa          #+#    #+#             */
/*   Updated: 2024/04/16 20:33:30 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int		count_matrix(char **mat)
{
	int	i;

	i = 0;
	while (mat[i] != NULL)
		i++;
	return (i);
}

static	char	**parse_splitter(char **av)
{
	char	**tmp;

	tmp = ft_split(av[1], 32);
	// Testing
	ft_printf("matrix len: %d\n", count_matrix(tmp));
	if (count_matrix(av) < 2)
		return (write(1, "bad arguments!\n", 15), NULL);
	else
		return (tmp);
}

void	parse_args(char **av, int ac, t_list *stack_a)
{
	int		i;
	int		j;
	char	**av_clone;

	i = 1;
	j = 0;
	if (ac == 2)
		av_clone = parse_splitter(av);

	// copy the matrix to av_clone
	
	while (av_clone[j] != NULL)
	{
		// check for invalid arguments
	}
	
	stack_a = ft_lstnew(av[i++]);
	while (av[i] != (void *)0)
		ft_lstadd_back(&stack_a, ft_lstnew(av[i++]));

	//Print Testing
	while (stack_a != NULL)
	{
		printf("%s\n", (char *)stack_a->content);
		stack_a = stack_a->next;
	}
	//////////////////////////////////////////////
}
