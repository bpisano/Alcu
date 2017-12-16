/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   display.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/16 12:52:27 by bpisano      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/16 13:39:11 by bpisano     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "alcu.h"
#include <stdio.h>

static int		row_size(int row, int nb_rows)
{
	if (row == nb_rows - 1)
		return (1);
	return (2 + row_size(row + 1, nb_rows));
}

static void		print_row(int size, int current, int *printed)
{
	int		i;

	i = 0;
	while (i < size && *printed < current)
	{
		ft_putchar('|');
		(*printed)++;
		i++;
	}
	ft_putchar('\n');
}

static void		print_spaces(int spaces)
{
	int		i;

	i = 0;
	while (i < spaces)
	{
		ft_putchar(' ');
		i++;
	}
}

void			print_board(int init, int current)
{
	int		i;
	int		rows;
	int		printed;

	i = 0;
	printed = 0;
	rows = ft_sqrt(init);
	while (i < rows && printed < current)
	{
		print_spaces(i);
		print_row(row_size(i, rows), current, &printed);
		i++;
	}
}

void			print_error(void)
{
	ft_putstr_fd("ERROR", 2);
}
