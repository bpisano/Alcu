/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   alcu.h                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/16 12:50:53 by bpisano      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/16 14:26:48 by bpisano     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ALCU_H
# define ALCU_H

# include "libft.h"
# include <stdlib.h>

# define MIN_SCORE -999
# define MAX_SCORE 999
# define BUFF_SIZE 16000

void	print_board(int init, int current);
int		solve(int current);
int		min(int current);
int		max(int current);

# endif
