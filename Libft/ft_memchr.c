/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 23:55:23 by otangkab          #+#    #+#             */
/*   Updated: 2022/06/22 17:59:00 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>
#include<stddef.h>

void	*ft_memchr(void *src, int chr, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	c;

	c = (unsigned char)chr;
	tmp = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		if (tmp[i] == c)
			return (src + i);
	i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*s = "this is a book on the pile of books.";
	char	c = 'b';
	int	n = 33;
	char	*ret;

	ret = memchr(s, c, n);
	printf("return = %s\n", ret);
}*/
