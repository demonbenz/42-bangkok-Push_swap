/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:46:00 by otangkab          #+#    #+#             */
/*   Updated: 2022/08/11 23:49:24 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<string.h>
//#include<stdio.h>
#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	n;

	n = 0;
	while (src[n] != '\0')
	{	
		n++;
	}
	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && (i + 1) < size)
		{
			dst[i] = src[i];
		i++;
		}
		dst[i] = '\0';
	}
	return (n);
}
/*
int	main()
{
	char	s1[10] = "ab";
	char	d1[10] = "aaa";
	char	d2[10] = "bbb";
	int	s;
	int	ret;
	int	ret2;
	s = 4;
	ret = strlcpy(d1, s1, s);
	ret2 = ft_strlcpy(d2, s1, s);
	printf("s1 = %s\nd1 = %s\nret = %d\n", s1, d1, ret);
	printf("s1 = %s\nd2 = %s\nret2 = %d\n", s1, d2, ret2);
}*/
