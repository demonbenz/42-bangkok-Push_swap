/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 01:36:20 by otangkab          #+#    #+#             */
/*   Updated: 2023/03/13 14:16:54 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_error_clrlst_exit(int err, t_list **lst)
{
	if (err < 0)
	{
		write (2, "Error\n", 6);
		ft_lstclear(lst, ft_del);
		exit(1);
	}
	if (err > 0)
	{
		ft_lstclear(lst, ft_del);
	}
	return ;
}
/*
void	print_error_clrlst_exit(int err, t_list **lst)
{

	if (err < 0)
	{
		write (1, "Error\n", 6);
		
		if (err == -1)
			write (1, "Input error.\n", 13);
		if (err == -2)
			write (1, "Min Max.\n", 9);
		if (err == -3)
			write (1, "Repeat value.\n", 14);
		
		// clear list in stack
		ft_lstclear(lst, ft_del);
		// exit(1);
	}
	if (err > 0)
	{
		//clear list in stac
		ft_lstclear(lst, ft_del);
		//exit(1);
	}
	return ;
}
*/
