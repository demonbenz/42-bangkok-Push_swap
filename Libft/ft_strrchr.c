/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:29:10 by otangkab          #+#    #+#             */
/*   Updated: 2022/08/12 18:43:15 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<string.h>
//#include<stdio.h>

char	*ft_strrchr(const char *src, int c)
{
	int		i;
	char	*s;

	s = (char *)src;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)&src[i]);
		}
	i--;
	}
	return (0);
}
/*
int	main()
{
	char	*s;
	char	c;
	char	*ret;

	s = "abcdef1ghijkldmnopqrs1tuvdxyz";
	c = '\0';
	ret = ft_strrchr(s, c);
	printf("%s",ret);
}*/
