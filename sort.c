/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 22:35:26 by otangkab          #+#    #+#             */
/*   Updated: 2023/03/15 21:36:20 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_stack **a)
{
	t_stack	*tmp;
	int		min;

	min = INT_MAX;
	if (*a == NULL)
		return (1);
	tmp = *a;
	while (tmp)
	{
		if (tmp->index < min)
			min = tmp->index;
		tmp = tmp->next;
	}
	return (min);
}

void	sort_3(t_stack **a)
{
	if (is_sorted(a))
		return ;
	if ((*a)->index < (*a)->next->index)
	{
		if ((*a)->index > (*a)->next->next->index)
			rra_(a);
		else
		{
			rra_(a);
			sa_(a);
		}	
	}
	else
	{
		if ((*a)->index < (*a)->next->next->index)
			sa_(a);
		else
		{
			ra_(a);
			if ((*a)->index > (*a)->next->index)
				sa_(a);
		}
	}
}

void	sort_4(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (is_sorted(a))
		return ;
	tmp = stacklast(*a);
	if (tmp->index == 1)
		rra_(a);
	else
	{
		while ((*a)->index > 1)
			ra_(a);
	}
	pb_(a, b);
	sort_3(a);
	pa_(a, b);
}

void	pa_back_sort5(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = stacklast(*b);
	if (stack_len(*b) > 1)
	{
		if ((*b)->index < (*b)->next->index)
			sb_(b);
		sort_3(a);
	}
	pa_(a, b);
	pa_(a, b);
}

void	sort_5(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	int		len;
	int		min;

	min = find_min(a);
	tmp = stacklast(*a);
	len = 5;
	if (is_sorted(a))
		return ;
	while (len > 3)
	{
		if ((tmp->index == min) || (tmp->index == (min + 1)) \
				|| ((*a)->index == min) || ((*a)->index == (min + 1)))
		{
			if ((tmp->index == min) || (tmp->index == (min + 1)))
				rra_(a);
			pb_(a, b);
			len--;
		}
		else
			ra_(a);
		tmp = stacklast(*a);
	}
	pa_back_sort5(a, b);
}
