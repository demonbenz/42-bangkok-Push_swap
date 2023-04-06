/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:07:53 by otangkab          #+#    #+#             */
/*   Updated: 2022/08/11 23:46:07 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<string.h>
//#include<stdio.h>
#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_d;
	size_t	len_s;

	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	if (size <= len_d)
		return (len_s + size);
	i = 0;
	while (dst[i] != '\0')
		i++;
	j = 0;
	if (size > 0)
	{
		while ((src[j] != '\0') && ((i + 1) < size))
		{
			dst[i] = src[j];
		i++;
		j++;
		}
		dst[i] = '\0';
	}
	return (len_s + len_d);
}
/*
int	main()
{
	char s1[50] = "lorem ipsum dolar sit amet";
	char d1[16] = {'r','r','r','r','r','\0'};
	char d2[16] = {'r','r','r','r','r'};
	int size;
	int ret1;
	int ret2;

	size = 5;	
	ret1 = strlcat(d1, s1, size);
	ret2 = ft_strlcat(d2, s1, size);
	printf("d1 = %s\ns1 = %s\nret1 = %d\n---\n", d1, s1, ret1);
	printf("d2 = %s\ns1 = %s\nret2 = %d\n", d2, s1, ret2);
}*/
