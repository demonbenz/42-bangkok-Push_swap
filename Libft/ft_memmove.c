/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:03:29 by otangkab          #+#    #+#             */
/*   Updated: 2022/06/24 18:09:16 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>
#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	if (n == 0)
		return (dst);
	if (dst > src)
	{
		i = n;
		while (--i > 0)
			((char *)dst)[i] = ((char *)src)[i];
		((char *)dst)[i] = ((char *)src)[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((char *)dst)[i] = ((char *)src)[i];
		i++;
		}
	}
	return (dst);
}
/*
int	main()
{
	int	n;
	int	i;
	int	size;
	size = 20;
	char	s1[20] = "con\0sec\0te\0tur";
	char	*s2;

	s2 = s1 + 1;
	n = 10;
	ft_memmove(s1, s2, n);
	i = 8;
	while (i < n)
	{
		printf("s2 = %c\n", s2[i]);
	i++;
	}
}*/
