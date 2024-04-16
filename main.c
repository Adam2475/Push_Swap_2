/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:41:45 by adapassa          #+#    #+#             */
/*   Updated: 2024/04/16 14:51:11 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_list  *stack_a;
    t_list  *stack_b;

    stack_a = NULL;
    stack_b = NULL;

    if (ac < 2)
        return(write(1, "error\n", 6));

    parse_args(av, stack_a);
    return (0);
}