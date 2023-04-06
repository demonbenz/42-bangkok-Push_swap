/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 07:32:26 by otangkab          #+#    #+#             */
/*   Updated: 2022/06/29 08:37:53 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
//#include<stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
	i++;
	}
}
/*
void	in_func(unsigned int num, char *c)
{
	printf("index %d : %p --> %c\n", num, &c[num], c[num]);
}

int	main(void)
{
	char	str[] = "THIS MUST be itterate.";
	ft_striteri(str, in_func);
	printf("%s", str);
}*/
