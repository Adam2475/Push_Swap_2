/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 01:00:00 by adapassa          #+#    #+#             */
/*   Updated: 2024/04/16 17:53:59 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    parse_args(char **av, int ac, t_list *stack_a)
{
    int     i;

    i = 1;
    if (ac == 2)
        stack_a = parse_splitter(av);
    stack_a = ft_lstnew(av[i++]);
    while (av[i] != (void *)0)
        ft_lstadd_back(&stack_a, ft_lstnew(av[i++]));

    // Print Testing  
    // while (stack_a != NULL)
    // {
    //     printf("%s\n", (char *)stack_a->content);
    //     stack_a = stack_a->next;
    // }
}
