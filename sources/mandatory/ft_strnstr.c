/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:01:44 by wharinas          #+#    #+#             */
/*   Updated: 2022/02/19 11:37:57 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (*needle == 0 || haystack == needle)
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while (*haystack && needle_len <= len--)
	{
		if (!(ft_strncmp((char *)haystack, (char *)needle, needle_len)))
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
