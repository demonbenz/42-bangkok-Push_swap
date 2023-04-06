/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:30:43 by otangkab          #+#    #+#             */
/*   Updated: 2023/03/10 23:02:18 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *s)
{
	int					i;
	int					sign;
	unsigned long long	sum;

	sum = 0;
	sign = 1;
	i = 0;
	while (s[i] != '\0' && (s[i] == ' ' || (s[i] >= '\a' && s[i] <= '\r')))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
	{
		sum = (sum * 10) + (s[i] - 48);
		i++;
	}
	if ((sum >= LLONG_MAX) && (sign == 1))
		return (-1);
	if ((sum > LLONG_MAX) && (sign == -1))
		return (0);
	return (sum * sign);
}
/*
int	main(void)
{
	const char	*src = "-999999999999999999999999999";
	int	ret;
	ret = ft_atoi(src);
	printf("ret = %d", ret);	
}*/
