/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 04:08:52 by wharinas          #+#    #+#             */
/*   Updated: 2022/03/09 18:23:56 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memcpy(void *des, const void *src, size_t size)
{
	size_t		i;
	char		*des_temp;

	des_temp = des;
	if (!des && !src)
		return (0);
	i = 0;
	while (i < size)
	{
		((unsigned char *)des_temp)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (des_temp);
}
