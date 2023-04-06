/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:32:37 by otangkab          #+#    #+#             */
/*   Updated: 2023/03/17 18:42:54 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_chunk	*set_chunk(t_stack **a, int num)
{
	t_chunk	*tmp;

	tmp = (t_chunk *)malloc(sizeof(t_chunk) * 1);
	if (!tmp)
		return (NULL);
	tmp->min = 1;
	tmp->len = stack_len(*a);
	tmp->unit = tmp->len / num;
	tmp->max = tmp->unit;
	tmp->first = 0;
	tmp->last = 0;
	tmp->range1 = 0;
	tmp->range2 = 0;
	tmp->med = (tmp->min + tmp->max) / 2;
	return (tmp);
}

int	count_stack(t_stack **a, int index)
{
	t_stack	*tmp;
	int		num;

	tmp = *a;
	num = 0;
	while (tmp)
	{
		if (tmp->index == index)
		{
			num++;
			break ;
		}
		tmp = tmp->next;
	num++;
	}
	return (num);
}

void	next_chunk(t_chunk *ch)
{
	ch->min = ch->max + 1;
	ch->max += ch->unit;
	ch->med = (ch->min + ch->max) / 2;
}

void	reset_chunk(t_chunk *ch)
{
	ch->first = 0;
	ch->last = 0;
	ch->range1 = 0;
	ch->range2 = 0;
}
