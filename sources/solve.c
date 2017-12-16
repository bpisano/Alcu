/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   solve.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/16 13:49:14 by bpisano      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/16 14:31:10 by bpisano     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "alcu.h"

int		max(int current)
{
	int		i;
	int		max;
	int		try;

	if (current == 1)
		return (MIN_SCORE);
	i = 1;
	max = MIN_SCORE;
	while (i <= 3 && i > current)
	{
		try = min(current - i);
		if (try > max)
			max = try;
		i++;
	}
	return (max);
}

int		min(int current)
{
	int		i;
	int		min;
	int		try;

	if (current == 1)
		return (MAX_SCORE);
	i = 1;
	min = MAX_SCORE;
	while (i <= 3 && i > current)
	{
		try = max(current - i);
		if (try < min)
			min = try;
		i++;
	}
	return (min);
}

int		solve(int current)
{
	int		i;
	int		m;
	int		try;
	int		remove;

	i = 1;
	m = MIN_SCORE;
	remove = i;
	while (i <= 3 && i < current)
	{
		try = max(current - i);
		if (try > m)
		{
			m = try;
			remove = i;
		}
		i++;
	}
	return (remove);
}
