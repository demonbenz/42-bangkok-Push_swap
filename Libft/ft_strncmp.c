/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:47:51 by otangkab          #+#    #+#             */
/*   Updated: 2022/06/23 18:30:39 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>
#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((*s1 != '\0' && *s2 != '\0') && (i < n))
	{
		if (*s1 != *s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
	s1++;
	s2++;
	i++;
	}
	if (i != n)
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	return (0);
}
/*
int	main()
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;
	size_t	n;
	int	ret;

	s1 = "test\200";
	s2 = "test\0";
	s3 = "";
	s4 = "aaaa";
	n = 6;
	ret = ft_strncmp(s1, s2, n);
	printf("%d",ret);
}*/
