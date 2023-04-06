/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruct.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 23:11:08 by otangkab          #+#    #+#             */
/*   Updated: 2023/03/16 23:00:02 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include<unistd.h>

#include<stdio.h>

void	sa_(t_stack **stack)
{
	t_stack	*tmp;

	if (*stack == NULL || ((*stack)->next == NULL))
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	if ((*stack)->next == NULL)
	{
		tmp->next = NULL;
		(*stack)->next = tmp;
	}
	else
	{
		tmp->next = (*stack)->next;
		(*stack)->next = tmp;
	}
	write(1, "sa\n", 3);
}

void	sb_(t_stack **stack)
{
	t_stack	*tmp;

	if (*stack == NULL || ((*stack)->next == NULL))
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	if ((*stack)->next == NULL)
	{
		tmp->next = NULL;
		(*stack)->next = tmp;
	}
	else
	{
		tmp->next = (*stack)->next;
		(*stack)->next = tmp;
	}
	write(1, "sb\n", 3);
}

void	ss_(t_stack **a, t_stack **b)
{
	t_stack	*tmp_a;
	t_stack	*tmp_b;

	if ((*a == NULL) || ((*a)->next == NULL) \
			|| (*b == NULL) || ((*b)->next == NULL))
	{
		return ;
	}
	tmp_a = *a;
	*a = (*a)->next;
	tmp_a->next = (*a)->next;
	(*a)->next = tmp_a;
	tmp_b = *b;
	*b = (*b)->next;
	tmp_b->next = (*b)->next;
	(*b)->next = tmp_b;
	write(1, "ss\n", 3);
}

void	pa_(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (*b == NULL)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = NULL;
	stack_addfront(a, tmp);
	write(1, "pa\n", 3);
}

void	pb_(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (*a == NULL)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = NULL;
	stack_addfront(b, tmp);
	write(1, "pb\n", 3);
}
