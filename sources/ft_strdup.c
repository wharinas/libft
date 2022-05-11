/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:44:48 by wharinas          #+#    #+#             */
/*   Updated: 2022/02/22 23:42:29 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*des;
	int		i;

	des = malloc(ft_strlen(s1) + 1 * sizeof(char));
	if (!des)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		des[i] = s1[i];
		i++;
	}
	des[i] = '\0';
	return (des);
}
