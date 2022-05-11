/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:24:25 by wharinas          #+#    #+#             */
/*   Updated: 2022/02/23 22:38:30 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *des, const char *src, size_t size)
{
	size_t		src_len;
	char		*des_temp;

	des_temp = des;
	src_len = ft_strlen(src);
	if (src_len + 1 < size)
		ft_memcpy(des_temp, src, src_len + 1);
	else if (size)
	{
		ft_memcpy(des_temp, src, size - 1);
		des_temp[size - 1] = '\0';
	}
	return (src_len);
}
