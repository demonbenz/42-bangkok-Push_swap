/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 06:54:47 by otangkab          #+#    #+#             */
/*   Updated: 2022/06/29 07:22:47 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*map;
	unsigned int	i;

	if (!s)
		return (0);
	map = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (map == 0)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		map[i] = (*f)(i, s[i]);
	i++;
	}
	map[i] = '\0';
	return (map);
}
/*
char	inner_func(unsigned int num, char c)
{
	printf("index of %c is: %d\n", c, num);
	return (c);
}

int	main(void)
{
	char	*str = "This could be in function.";
	char	*ret;
	ret = ft_strmapi(str, inner_func);
	printf("%s", ret);
	free (ret);
}*/
