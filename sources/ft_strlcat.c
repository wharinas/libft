/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:05:59 by wharinas          #+#    #+#             */
/*   Updated: 2022/02/23 22:38:51 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *des, const char *src, size_t des_size)
{
	char		*des_temp;
	const char	*src_temp;
	size_t		n;
	size_t		des_len;

	des_temp = des;
	src_temp = src;
	n = des_size;
	while (n-- != 0 && *des_temp != '\0')
		des_temp++;
	des_len = des_temp - des;
	n = des_size - des_len;
	if (n == 0)
		return (des_len + ft_strlen(src_temp));
	while (*src_temp)
	{
		if (n != 1)
		{
			*des_temp++ = *src_temp;
			n--;
		}
		src_temp++;
	}
	*des_temp = '\0';
	return (des_len + (src_temp - src));
}
