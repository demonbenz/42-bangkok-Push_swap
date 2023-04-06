/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:12:44 by otangkab          #+#    #+#             */
/*   Updated: 2022/08/13 18:16:56 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	size_t	first;
	size_t	last;
	size_t	j;

	if (!s1 || !set)
		return (0);
	last = ft_strlen(s1);
	first = 0;
	while ((s1[first] != '\0') && ft_strchr(set, s1[first]))
		first++;
	while ((last > first) && ft_strchr(set, s1[last]))
		last--;
	tmp = (char *)malloc(sizeof(char) * ((last - first + 1) + 1));
	if (!tmp)
		return (0);
	j = 0;
	last = last - first;
	while (j <= last)
		tmp[j++] = s1[first++];
	tmp[j] = '\0';
	return (tmp);
}
/*
int	main(void)
{
	char	*str = "cat1234567cat";
	char	*set = "cat17";
	char	*ret;
	ret = ft_strtrim(str, set);
	printf("ret = %s", ret);
	free(ret);
}*/
