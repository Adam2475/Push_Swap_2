/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:45:55 by adapassa          #+#    #+#             */
/*   Updated: 2024/04/16 14:53:37 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    parse_args(char **av, t_list *stack_a)
{
    int i;

    i = 1;
    stack_a = ft_lstnew(av[i++]);
    // while (av[i] != (void *)0)
    // {
        
    // }
    printf("%s\n", (char *)stack_a->content);
}