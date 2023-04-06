/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 17:15:54 by otangkab          #+#    #+#             */
/*   Updated: 2023/03/16 20:13:46 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <limits.h>
# include <stddef.h>
# include "Libft/libft.h"

typedef struct s_pair
{
	int	len;
	int	first;
	int	last;
	int	range1;
	int	range2;
	int	max;
	int	max2;
}t_pair;

typedef struct s_chunk
{
	int	min;
	int	med;
	int	max;
	int	first;
	int	last;
	int	range1;
	int	range2;
	int	len;
	int	unit;
}t_chunk;

typedef struct s_stack
{
	int				index;
	int				content;
	struct s_stack	*next;
}t_stack;

//check.c
int		check_data(t_list *stack);
int		check_repeat(t_list *lst);
int		check_min_max(t_list *lst);
int		check_sort(t_list *lst);
int		check_em_all(t_list **lst);

//instruct.c
void	sa_(t_stack **stack);
void	sb_(t_stack **stack);
void	ss_(t_stack **a, t_stack **b);
void	pa_(t_stack **a, t_stack **b);
void	pb_(t_stack **a, t_stack **b);

//instruc2.c
void	ra_(t_stack **a);
void	rb_(t_stack **b);
void	rra_(t_stack **a);
void	rrb_(t_stack **b);
void	rr_(t_stack **a, t_stack **b);

//instruct3.c
void	rrr_(t_stack **a, t_stack **b);

//stack.c
void	stack_addback(t_stack **stack, t_stack *new);
void	stack_addfront(t_stack **stack, t_stack *new);
t_stack	*stack_new(int num);
t_stack	*stacklast(t_stack *stack);
t_stack	*stack_before_last(t_stack *stack);

//stack2.c
int		stack_len(t_stack *stack);
int		stack_len_set_id_zero(t_stack *stack);
void	ft_stackclear(t_stack **stack);
void	index_to_stack(t_stack *stack);
t_stack	*put_stack(t_list *lst);

//push_utils.c
long	ft_atolong(const char *s);
void	convert_to_long(t_list *lst);
void	ft_del(void *content);
//void	print_stack(t_stack *stack);

//error.c
void	print_error_clrlst_exit(int err, t_list **lst);

//sort.c
int		find_min(t_stack **a);
void	sort_3(t_stack **a);
void	sort_4(t_stack **a, t_stack **b);
void	pa_back_sort5(t_stack **a, t_stack **b);
void	sort_5(t_stack **a, t_stack **b);

//sort2.c
int		is_sorted(t_stack **stack);
int		find_nearest(t_stack **a, int min);
void	ra_til_top(t_stack **a, int min);
void	rra_til_top(t_stack **a, int min);
//void	sort_all(t_stack **a, t_stack **b);

//sort3.c
int		find_near_a(t_stack **a, t_chunk *ch);
int		find_near_b(t_stack **b, int max);
void	set_range(t_stack **a, t_chunk *ch);
void	find_pair(t_stack **b, t_pair *p);
t_pair	*set_pair(int max);

//sort4.c
t_chunk	*set_chunk(t_stack **a, int num);
int		count_stack(t_stack **a, int index);
void	next_chunk(t_chunk *ch);
void	reset_chunk(t_chunk *ch);

//sort5.c
void	rb_til_top(t_stack **b, int max);
void	rrb_til_top(t_stack **b, int max);
void	throw_b(t_stack **a, t_stack **b, int med);
void	throw_a(t_stack **a, t_stack **b);

//sort_100.c
void	sort_100(t_stack **a, t_stack **b);
void	sort_500(t_stack **a, t_stack **b);

t_list	*add_data(int argc, char **argv);

#endif
