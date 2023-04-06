/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 02:01:35 by otangkab          #+#    #+#             */
/*   Updated: 2023/03/16 16:24:47 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	if (tmp == NULL)
		return (0);
	while (tmp->next)
	{
		if (tmp->next->index < tmp->index)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	find_nearest(t_stack **a, int min)
{
	int		first;
	int		mid;
	t_stack	*tmp;

	first = 1;
	mid = (stack_len(*a) / 2);
	tmp = *a;
	while (tmp)
	{
		if (tmp->index == min)
			break ;
		tmp = tmp->next;
		first++;
	}
	if (first < mid)
		return (1);
	else
		return (0);
}

void	rra_til_top(t_stack **a, int min)
{
	while (1)
	{
		if ((*a)->index == min)
			break ;
		rra_(a);
	}
}

void	ra_til_top(t_stack **a, int min)
{
	while (1)
	{
		if ((*a)->index == min)
			break ;
		ra_(a);
	}
}
/*
void	sort_all(t_stack **a, t_stack **b)
{
	int	len;
	int	min;
	int	found;
	t_stack	*tmp;

	tmp = stacklast(*b);
	len = stack_len(*a);
	min = 1;
	while (len > 5)
	{
		found = find_nearest(a, min);
		if (found)
			ra_til_top(a, min);
		else
			rra_til_top(a, min);
		pb_(a, b);
	len--;
	min++;
	}
	sort_5(a, b);
	while (*b)
	{
		if (stack_len(*b) > 1)
			if ((*b)->index < tmp->index)
				rrb_(b);
		pa_(a, b);
	}
}*/
