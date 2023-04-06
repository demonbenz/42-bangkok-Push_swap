/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:25:04 by otangkab          #+#    #+#             */
/*   Updated: 2022/08/13 12:09:23 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include"libft.h"
//#include<stdlib.h>

static int	ft_word_count(char const *s, char c)
{
	int	w;
	int	found;

	found = 0;
	w = 0;
	while (*s)
	{
		if ((*s != c) && (found >= 0))
		{
			w++;
			found = -1;
		}
		if (*s == c)
			found = 0;
	s++;
	}
	return (w);
}

static int	ft_wlen(char const *s, int i, char c)
{
	int	len;

	len = 0;
	while ((s[i] != '\0') && (s[i] != c))
	{
		len++;
		i++;
	}
	return (len);
}

static void	ft_freemem(char **s, int j)
{
	while (j > 0)
	{
		free(s[j]);
	j--;
	}
	free(s);
}

static char	**ft_strsplit(char **w_set, char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			w_set[j] = ft_substr(s, i, ft_wlen(s, i, c));
			if (!w_set[j])
			{
				ft_freemem(w_set, j);
				return (NULL);
			}
			w_set[j][ft_wlen(s, i, c)] = '\0';
			i += ft_wlen(s, i, c);
			j++;
		}
		else
			i++;
	}
	w_set[j] = NULL;
	return (w_set);
}

char	**ft_split(char const *s, char c)
{
	char	**w_set;

	if (!s)
		return (NULL);
	w_set = (char **)malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!w_set)
		return (NULL);
	return (ft_strsplit(w_set, s, c));
}
/*
int	main(void)
{
	char	*str;
	char	c;
	char	**ptr;
	int	i;
	int	words;

	str = ",jan,,feb,,june,";
	c = ',';
	ptr = ft_split(str, c);
	
	words = ft_word_count(str, c);
	i = 0;
	while (i < words)
	{
		printf("%s\n", ptr[i]);
	i++;
	}
	while (--i >= 0)
	{
		free(ptr[i]);
	}
	free(ptr);
}*/
