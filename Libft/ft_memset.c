/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 09:24:30 by otangkab          #+#    #+#             */
/*   Updated: 2022/08/13 15:18:58 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = c;
	i++;
	}
	return (b);
}
/*
int	main()
{
	char	s[10] = "abcdefg";
	int	len;
	char	*ret;

	len = 8;
	ret = (char *)memset(s, '5', len);
	printf("s = %s\nret = %s\n", s, ret);
}*/
