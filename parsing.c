/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 01:00:00 by adapassa          #+#    #+#             */
/*   Updated: 2024/04/17 13:56:19 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_duplicates(char **arr, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strncmp(arr[i], ft_strlen(arr[i]), arr[j]) == 0)
			{
				return true;
			}
			j++;
		}
		i++;
	}
}

void	free_matrix(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i] != NULL)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

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
	// ft_printf("matrix len: %d\n", count_matrix(tmp));
	if (count_matrix(av) < 2)
		return (write(1, "bad arguments!\n", 15), NULL);
	else
		return (tmp);
}

static	char	**parse_copy(int ac, char **av)
{
	char	**tmp;
	int		i;
	int		j;

	i = 0;
	j = 1;
	tmp = (char **)ft_calloc((ac + 1), sizeof(char *));
	if (!tmp)
		return (write(2, "error", 5), NULL);
	while (i < ac && av[j])
	{
		tmp[i] = ft_strdup(av[j]);
		i++;
		j++;
	}
	return (tmp);
}

char	**parse_args(char **av, int ac)
{
	int		i;
	int		j;
	char	**av_clone;

	i = 1;
	j = 0;
	if (ac == 2)
		av_clone = parse_splitter(av);
	else
		av_clone = parse_copy(ac, av);
	while (av_clone[j] != NULL)
	{
		if (ft_str_isdigit(av_clone[j]))
		{
			free_matrix(av_clone);
			exit(write(1, "arg error!\n", 11));
		}
		ft_printf("clone pos: %d = %s\n",j , av_clone[j]);
		j++;
	}
	return (av_clone);
}
