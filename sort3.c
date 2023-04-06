/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:24:46 by otangkab          #+#    #+#             */
/*   Updated: 2023/03/16 20:09:51 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_range(t_stack **a, t_chunk *ch)
{
	t_stack	*tmp;

	tmp = *a;
	while (tmp)
	{
		if ((tmp->index >= ch->min) && (tmp->index <= ch->max))
		{	
			ch->first = tmp->index;
			ch->last = tmp->index;
			break ;
		}
		ch->range1++;
		tmp = tmp->next;
	}
	while (tmp)
	{
		if ((tmp->index >= ch->min) && (tmp->index <= ch->max))
			ch->last = tmp->index;
		tmp = tmp->next;
	}
	ch->range2 = count_stack(a, ch->last);
}

int	find_near_a(t_stack **a, t_chunk *ch)
{
	set_range(a, ch);
	if (ch->first == 0)
		return (0);
	else if (ch->range1 < (ch->len - ch->range2))
		return (1);
	else
		return (-1);
}

t_pair	*set_pair(int max)
{
	t_pair	*tmp;

	tmp = (t_pair *)malloc(sizeof(t_pair) * 1);
	tmp->len = max;
	tmp->first = 0;
	tmp->last = 0;
	tmp->range1 = 0;
	tmp->range2 = 0;
	tmp->max = max;
	tmp->max2 = max - 1;
	return (tmp);
}

void	find_pair(t_stack **b, t_pair *p)
{
	t_stack	*tmp;

	tmp = *b;
	while (tmp)
	{
		if (tmp->index == p->max || tmp->index == p->max2)
		{
			p->first = tmp->index;
			p->last = tmp->index;
			break ;
		}
		p->range1++;
		tmp = tmp->next;
	}
	while (tmp)
	{
		if (tmp->index == p->max || tmp->index == p->max2)
			p->last = tmp->index;
		tmp = tmp->next;
	}
	p->range2 = count_stack(b, p->last);
}

int	find_near_b(t_stack **b, int max)
{
	t_pair	*p;
	int		found;
	int		start;
	int		end;

	p = set_pair(max);
	find_pair(b, p);
	found = p->first;
	start = p->range1;
	end = p->len - p->range2;
	free(p);
	if (found == 0)
		return (0);
	else if (start < end)
		return (1);
	else
		return (-1);
}
