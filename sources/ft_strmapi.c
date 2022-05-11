/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 23:20:46 by wharinas          #+#    #+#             */
/*   Updated: 2022/02/22 17:50:23 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*tmp;
	unsigned int	i;

	if (!s)
		return (NULL);
	tmp = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!tmp)
		return (tmp);
	i = 0;
	while (*s)
	{
		tmp[i] = (*f)(i, *s);
		i++;
		s++;
	}
	tmp[i] = '\0';
	return (tmp);
}
