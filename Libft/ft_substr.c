/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 16:53:11 by otangkab          #+#    #+#             */
/*   Updated: 2022/08/13 12:30:25 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<stdlib.h>
#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;

	if (!s)
		return (0);
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	tmp = (char *)malloc(sizeof(char) * (len + 1));
	if (tmp == 0)
		return (0);
	i = 0;
	while ((i < len) && (start < ft_strlen(s)))
	{
		tmp[i] = *((s + start) + i);
	i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
/*
int	main(void)
{
	char	*str = "01234";
	char	*ret;
	int	id;
	int	size;
	size = 10;
	id = 10;

	ret = ft_substr(str, id, size);
	printf("ret = %s", ret);
	free(ret);
}*/
