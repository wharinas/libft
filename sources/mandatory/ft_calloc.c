/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 05:59:14 by wharinas          #+#    #+#             */
/*   Updated: 2022/02/19 06:25:23 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*var;

	total = count * size;
	var = malloc(total);
	if (!var)
		return (0);
	ft_bzero(var, total);
	return (var);
}
