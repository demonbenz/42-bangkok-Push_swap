/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 00:05:03 by otangkab          #+#    #+#             */
/*   Updated: 2023/03/28 02:11:43 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_data(t_list *stack)
{
	int		i;
	char	*str;

	while (stack)
	{
		str = (char *)stack->content;
		i = 0;
		while (str[i])
		{
			if (!(ft_isdigit(str[i]) \
			|| ((str[i] == '+') && (ft_isdigit(str[i + 1]))) \
			|| ((str[i] == '-') && (ft_isdigit(str[i + 1])))) \
			|| (ft_isdigit(str[i]) && (str[i + 1] == '+')) \
			|| (ft_isdigit(str[i]) && (str[i + 1] == '-')))
				return (-1);
		i++;
		}
		stack = stack->next;
	}
	return (0);
}

int	check_repeat(t_list *lst)
{
	t_list	*tmp;

	while (lst)
	{
		tmp = lst->next;
		while (tmp)
		{
			if (*(int *)lst->content == *(int *)tmp->content)
				return (-3);
			tmp = tmp->next;
		}
		lst = lst->next;
	}
	return (0);
}

int	check_min_max(t_list *lst)
{
	while (lst)
	{
		if ((*(long *)lst->content > INT_MAX) \
				|| (*(long *)lst->content < INT_MIN))
		{
			return (-2);
		}
		lst = lst->next;
	}
	return (0);
}

int	check_sort(t_list *lst)
{
	t_list	*tmp;

	if (lst == NULL)
	{
		return (0);
	}
	while (lst->next)
	{
		tmp = lst->next;
		if (*(int *)lst->content > *(int *)tmp->content)
		{
			return (0);
		}
		lst = lst->next;
	}
	return (1);
}

int	check_em_all(t_list **lst)
{
	t_list	*tmp;
	int		ret;

	tmp = *lst;
	ret = 0;
	if (check_data(tmp) < 0)
		return (-1);
	convert_to_long(tmp);
	if (check_min_max(tmp) < 0)
		return (-2);
	else if (check_repeat(tmp) < 0)
		return (-3);
	else if (check_sort(tmp) > 0)
		return (1);
	else
		return (0);
}
