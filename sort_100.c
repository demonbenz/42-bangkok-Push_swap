/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 20:06:01 by otangkab          #+#    #+#             */
/*   Updated: 2023/03/17 22:52:29 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_ss(t_stack **a, t_stack **b)
{
	if (((*a) != NULL) && ((*b) != NULL))
		if (((*a)->next != NULL) && ((*b)->next != NULL))
			if (((*a)->index > (*a)->next->index) \
				&& ((*b)->index < (*b)->next->index))
				ss_(a, b);
}

void	sort_100(t_stack **a, t_stack **b)
{
	int		found;
	t_chunk	*chunk;

	chunk = set_chunk(a, 5);
	while (chunk->len > 0)
	{
		found = find_near_a(a, chunk);
		if (found == 0)
			next_chunk(chunk);
		else
		{
			if (found > 0)
				ra_til_top(a, chunk->first);
			else if (found < 0)
				rra_til_top(a, chunk->last);
			throw_b(a, b, chunk->med);
			chunk->len--;
		}
		check_ss(a, b);
		reset_chunk(chunk);
	}
	throw_a(a, b);
	free(chunk);
}

void	sort_500(t_stack **a, t_stack **b)
{
	int		found;
	t_chunk	*chunk;

	chunk = set_chunk(a, 8);
	while (chunk->len > 0)
	{
		found = find_near_a(a, chunk);
		if (found == 0)
			next_chunk(chunk);
		else
		{
			if (found > 0)
				ra_til_top(a, chunk->first);
			else if (found < 0)
				rra_til_top(a, chunk->last);
			throw_b(a, b, chunk->med);
			chunk->len--;
		}
		check_ss(a, b);
		reset_chunk(chunk);
	}
	throw_a(a, b);
	free(chunk);
}
