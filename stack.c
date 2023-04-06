/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 23:33:01 by otangkab          #+#    #+#             */
/*   Updated: 2023/03/10 01:06:45 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_before_last(t_stack *stack)
{
	while (stack != NULL)
	{
		if (stack->next->next == NULL)
			return (stack);
	stack = stack->next;
	}
	return (stack);
}

void	stack_addback(t_stack **stack, t_stack *new)
{
	t_stack	*tmp;

	if (new == NULL)
		return ;
	if (*stack == NULL)
	{
		*stack = new;
		return ;
	}
	tmp = *stack;
	tmp = stacklast(tmp);
	tmp->next = new;
}

void	stack_addfront(t_stack **stack, t_stack *new)
{
	t_stack	*tmp;

	if (new == NULL)
		return ;
	if (*stack == NULL)
	{
		*stack = new;
		return ;
	}
	tmp = *stack;
	new->next = tmp;
	*stack = new;
}

t_stack	*stack_new(int num)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
	{
		return (NULL);
	}
	new->content = num;
	new->next = NULL;
	return (new);
}

t_stack	*stacklast(t_stack *stack)
{
	while (stack != NULL)
	{
		if (stack->next == NULL)
			return (stack);
	stack = stack->next;
	}
	return (stack);
}
