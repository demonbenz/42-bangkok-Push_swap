/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruct2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 23:49:39 by otangkab          #+#    #+#             */
/*   Updated: 2023/03/10 01:25:29 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_(t_stack **a)
{
	t_stack	*tmp;

	if ((*a == NULL) || ((*a)->next == NULL))
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = NULL;
	stack_addback(a, tmp);
	write(1, "ra\n", 3);
}

void	rb_(t_stack **b)
{
	t_stack	*tmp;

	if ((*b == NULL) || ((*b)->next == NULL))
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = NULL;
	stack_addback(b, tmp);
	write(1, "rb\n", 3);
}

void	rra_(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if ((*a == NULL) || ((*a)->next == NULL))
		return ;
	tmp = *a;
	tmp2 = stack_before_last(tmp);
	tmp = stacklast(tmp);
	tmp2->next = NULL;
	stack_addfront(a, tmp);
	write(1, "rra\n", 4);
}

void	rrb_(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if ((*b == NULL) || ((*b)->next == NULL))
		return ;
	tmp = *b;
	tmp2 = stack_before_last(tmp);
	tmp = stacklast(tmp);
	tmp2->next = NULL;
	stack_addfront(b, tmp);
	write(1, "rrb\n", 4);
}

void	rr_(t_stack **a, t_stack **b)
{
	t_stack	*tmp_a;
	t_stack	*tmp_b;

	if ((*a == NULL) || ((*a)->next == NULL) \
			|| (*b == NULL) || ((*b)->next == NULL))
		return ;
	tmp_a = *a;
	*a = (*a)->next;
	tmp_a->next = NULL;
	stack_addback(a, tmp_a);
	tmp_b = *b;
	*b = (*b)->next;
	tmp_b->next = NULL;
	stack_addback(b, tmp_b);
	write(1, "rr\n", 3);
}
