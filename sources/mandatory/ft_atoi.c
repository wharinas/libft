/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 00:52:27 by wharinas          #+#    #+#             */
/*   Updated: 2022/05/12 00:58:13 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\f')
		return (1);
	else if (c == '\r' || c == '\n' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long	res;
	int		i;
	int		sign;

	i = 0;
	sign = 1;
	res = 0;
	while (is_space(str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		if (res * sign > 2147483647)
			return (-1);
		else if ((res * sign) < -2147483648)
			return (0);
		else
			res = res * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(res * sign));
}
