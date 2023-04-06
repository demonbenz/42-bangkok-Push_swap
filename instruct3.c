/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruct3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 23:59:48 by otangkab          #+#    #+#             */
/*   Updated: 2023/03/10 01:11:30 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr_(t_stack **a, t_stack **b)
{
	t_stack	*tmp_a;
	t_stack	*tmp_a_2;
	t_stack	*tmp_b;
	t_stack	*tmp_b_2;

	if ((*a == NULL) || ((*a)->next == NULL) \
			|| (*b == NULL) || ((*b)->next == NULL))
		return ;
	tmp_a = *a;
	tmp_a_2 = stack_before_last(tmp_a);
	tmp_a = stacklast(tmp_a);
	tmp_a_2->next = NULL;
	stack_addfront(a, tmp_a);
	tmp_b = *b;
	tmp_b_2 = stack_before_last(tmp_b);
	tmp_b = stacklast(tmp_b);
	tmp_b_2->next = NULL;
	stack_addfront(b, tmp_b);
	write(1, "rrr\n", 4);
}
