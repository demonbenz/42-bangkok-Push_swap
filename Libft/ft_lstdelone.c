/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 16:07:19 by otangkab          #+#    #+#             */
/*   Updated: 2022/08/10 22:29:42 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
//#include<stdlib.h>
//#include<unistd.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
/*
void	*ft_del(void *content)
{
	free(content);
}

void	ft_print_node(t_list *node)
{
	t_list	*tmp;

	tmp = node;
	while (tmp != NULL)
	{
		write(1, tmp->content, ft_strlen(tmp->content));
		write(1, "\n", 1);
		tmp = tmp->next;
	}
}

int	main()
{
	t_list	*node;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;

	char	*str1 = "one";
	char	*str2 = "two";
	char	*str3 = "three";
	char	*str4 = "four";

	node1 = ft_lstnew(str1);
	node2 = ft_lstnew(str2);
	node3 = ft_lstnew(str3);
	node4 = ft_lstnew(str4);
	
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	
	node = node1;

	ft_print_node(node);
	ft_lstdelone(node4, ft_del);
	ft_print_node(node);

	return (0);
}*/
