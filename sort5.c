/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:50:46 by otangkab          #+#    #+#             */
/*   Updated: 2023/03/16 18:33:42 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb_til_top(t_stack **b, int max)
{
	while (1)
	{
		if ((*b)->index == max || (*b)->index == (max - 1))
			break ;
		rb_(b);
	}
}

void	rrb_til_top(t_stack **b, int max)
{
	while (1)
	{
		if ((*b)->index == max || (*b)->index == (max - 1))
			break ;
		rrb_(b);
	}
}

void	throw_b(t_stack **a, t_stack **b, int med)
{
	if ((*a)->index >= med)
	{
		pb_(a, b);
		if ((*b)->next != NULL && ((*b)->index < (*b)->next->index))
			sb_(b);
	}
	else
	{
		pb_(a, b);
		rb_(b);
	}
}

void	throw_a(t_stack **a, t_stack **b)
{
	int		max;
	int		found;
	int		len;
	t_stack	*tmp;

	tmp = *b;
	len = stack_len(*b);
	max = len;
	while (len)
	{
		found = find_near_b(b, max);
		if (found == 0)
			max -= 2;
		else
		{
			if (found > 0)
				rb_til_top(b, max);
			else
				rrb_til_top(b, max);
			pa_(a, b);
			len--;
		}
		if ((*a)->next != NULL && ((*a)->index > (*a)->next->index))
			sa_(a);
	}
}
