/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 17:13:50 by otangkab          #+#    #+#             */
/*   Updated: 2023/03/17 22:24:10 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*add_data(int argc, char **argv)
{
	int		i;
	int		j;
	char	**split;
	t_list	*stack;
	t_list	*new;

	stack = NULL;
	new = NULL;
	if (argc < 1)
		return (NULL);
	i = 0;
	while (argv[++i])
	{
		split = ft_split(argv[i], ' ');
		j = 0;
		while (split[j] && (split != NULL))
		{
			new = ft_lstnew(split[j]);
			ft_lstadd_back(&stack, new);
			j++;
		}
		if (split != NULL)
			free(split);
	}
	return (stack);
}

void	sort(t_stack **a, t_stack **b)
{
	int	len;

	len = stack_len(*a);
	if (len < 1)
		return ;
	else if (len == 2)
		sa_(a);
	else if (len == 3)
		sort_3(a);
	else if (len == 4)
		sort_4(a, b);
	else if (len == 5)
		sort_5(a, b);
	else if (len <= 100)
		sort_100(a, b);
	else if (len <= 500)
		sort_500(a, b);
	else
		sort_500(a, b);
}

int	main(int argc, char **argv)
{
	int		ret;
	t_list	*data;
	t_stack	*stack_a;
	t_stack	*stack_b;

	data = NULL;
	stack_a = NULL;
	stack_b = NULL;
	ret = 0;
	data = add_data(argc, argv);
	ret = check_em_all(&data);
	print_error_clrlst_exit(ret, &data);
	stack_a = put_stack(data);
	ft_lstclear(&data, ft_del);
	index_to_stack(stack_a);
	sort(&stack_a, &stack_b);
	ft_stackclear(&stack_a);
	ft_stackclear(&stack_b);
	return (0);
}
/*
void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("list = %d\n",*(int *)(lst->content));
		lst = lst->next;
	}
}
*/
/*
int	is_null_str(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0' && str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '\0')
		return (1);
	return (0);
}
void	check_argv(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (is_null_str(argv[i]))
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		i++;
	}	
}
*/
