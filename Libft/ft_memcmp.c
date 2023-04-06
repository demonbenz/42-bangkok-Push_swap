/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 00:59:19 by otangkab          #+#    #+#             */
/*   Updated: 2022/06/22 17:59:29 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>
#include<stddef.h>

int	ft_memcmp(void *src1, void *src2, size_t len)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)src1;
	s2 = (unsigned char *)src2;
	i = 0;
	while (i < len)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[] = {'a','b','c','d','e','f','g','h','i','j'};
	char	s2[] = {'a','b','c','d','x','f','g','h','i','j'};
	int	ret;

	ret = ft_memcmp(s1, s2, 5);
	printf("%d\n",ret);
}*/
