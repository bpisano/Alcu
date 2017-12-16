/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/16 12:51:38 by bpisano      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/16 14:26:59 by bpisano     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "alcu.h"
#include <stdio.h>
int		main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	//print_board(ft_atoi(av[1]), ft_atoi(av[2]));
	printf("%d\n", solve(ft_atoi(av[1])));
	return (0);
}
