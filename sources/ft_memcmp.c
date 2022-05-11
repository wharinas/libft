/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:36:25 by wharinas          #+#    #+#             */
/*   Updated: 2022/03/09 18:21:10 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	unsigned char	*s1t;
	unsigned char	*s2t;

	s1t = (unsigned char *)s1;
	s2t = (unsigned char *)s2;
	while (size--)
	{
		if (*s1t != *s2t)
			return (*s1t - *s2t);
		s1t++;
		s2t++;
	}
	return (0);
}
