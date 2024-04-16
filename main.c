/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 01:00:00 by adapassa          #+#    #+#             */
/*   Updated: 2024/04/16 17:50:22 by adapassa         ###   ########.fr       */
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

    parse_args(av, ac, stack_a);
    return (0);
}
