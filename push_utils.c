/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:01:48 by otangkab          #+#    #+#             */
/*   Updated: 2023/03/16 20:13:22 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atolong(const char *s)
{
	int		i;
	long	sign;
	long	sum;

	sum = 0;
	sign = 1;
	i = 0;
	while (s[i] != '\0' && (s[i] == ' ' || (s[i] >= '\a' && s[i] <= '\r')))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
	{
		sum = (sum * 10) + (s[i] - 48);
		i++;
	}
	return (sum * sign);
}

void	convert_to_long(t_list *lst)
{
	long	*pt;

	while (lst)
	{
		pt = (long *)malloc(sizeof(long));
		if (!pt)
		{
			ft_lstclear(&lst, ft_del);
			return ;
		}
		*pt = ft_atolong(lst->content);
		free(lst->content);
		lst->content = pt;
		lst = lst->next;
	}
}

void	ft_del(void *content)
{
	if (content)
		free(content);
	else
		return ;
}
/*
void	print_stack(t_stack *stack)
{
	if (stack == NULL)
		return ;
	while (stack)
	{
		printf("content = %d, id[%d]\n", stack->content, stack->index);
		stack = stack->next;
	}
}*/
