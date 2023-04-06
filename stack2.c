/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 01:01:45 by otangkab          #+#    #+#             */
/*   Updated: 2023/03/10 16:12:13 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*put_stack(t_list *lst)
{
	t_stack	*tmp;
	t_stack	*new_stack;

	tmp = NULL;
	new_stack = NULL;
	while (lst)
	{
		new_stack = stack_new(*(int *)lst->content);
		stack_addback(&tmp, new_stack);
		lst = lst->next;
	}
	return (tmp);
}

void	ft_stackclear(t_stack **stack)
{
	t_stack	*tmp;

	if (*stack == NULL)
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
}

int	stack_len(t_stack *stack)
{
	int		num;
	t_stack	*tmp;

	num = 0;
	if (stack == NULL)
		return (0);
	tmp = stack;
	while (tmp)
	{
		tmp = tmp->next;
		num++;
	}
	return (num);
}

int	stack_len_set_id_zero(t_stack *stack)
{
	int		num;
	t_stack	*tmp;

	num = 0;
	if (stack == NULL)
		return (0);
	tmp = stack;
	while (tmp)
	{
		tmp->index = 0;
		tmp = tmp->next;
		num++;
	}
	return (num);
}

void	index_to_stack(t_stack *stack)
{
	int		max_value;
	int		heigth;
	t_stack	*max_pt;
	t_stack	*tmp;

	heigth = stack_len_set_id_zero(stack);
	if (stack == NULL)
		return ;
	while (heigth > 0)
	{
		max_value = INT_MIN;
		tmp = stack;
		while (tmp)
		{
			if (tmp->content > max_value && tmp->index < heigth)
			{
				max_pt = tmp;
				max_value = max_pt->content;
			}
			tmp = tmp->next;
		}
		max_pt->index = heigth;
		heigth--;
	}
}
