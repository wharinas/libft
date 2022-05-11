/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:53:30 by wharinas          #+#    #+#             */
/*   Updated: 2022/03/09 18:26:54 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*st;

	st = (unsigned char *)s;
	while (n--)
	{
		if (*st == (unsigned char)c)
			return (st);
		st++;
	}
	return (NULL);
}
