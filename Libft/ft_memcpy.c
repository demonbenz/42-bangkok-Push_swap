/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:38:37 by otangkab          #+#    #+#             */
/*   Updated: 2022/08/11 23:00:13 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>
#include"libft.h"

void	*ft_memcpy(void *dst, const char *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (dst == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
	i++;
	}
	return (d);
}
/*
int	main(void)
{
	char	src[20] = "1234567890";
	char	src2[20] = "";
	char	dst2[20] = "";
	int	n;

	n = 5;
	memcpy(src + 5, src + 2, n);
	printf("src = %s\n", src);
	memcpy(dst2, src2, n);
	printf("dst2 = %s\n", dst2);
}*/
