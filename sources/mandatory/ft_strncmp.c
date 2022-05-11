/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:39:20 by wharinas          #+#    #+#             */
/*   Updated: 2022/02/19 11:38:12 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while (n > 0 && *str1 != '\0' && *str2 != '\0')
	{
		if (*str1 != *str2)
			break ;
		str1++;
		str2++;
		n--;
	}
	if (!n)
		return (0);
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}
