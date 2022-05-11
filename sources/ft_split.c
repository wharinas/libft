/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:58:15 by wharinas          #+#    #+#             */
/*   Updated: 2022/03/10 22:24:11 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_custom_strlen(const char *str, char sep)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != sep)
		i++;
	return (i);
}

static	int	ft_count_words(const char *str, char sep)
{
	int	words;

	words = 0;
	while (*str)
	{
		while (*str && *str == sep)
			str++;
		if (*str && *str != sep)
			words++;
		while (*str && *str != sep)
			str++;
	}
	return (words);
}

static char	*ft_dup(const char *src, char sep)
{
	char	*dup;
	int		i;
	int		len;

	len = ft_custom_strlen(src, sep);
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (*src && *src != sep)
		dup[i++] = *src++;
	dup[i] = '\0';
	return (dup);
}

static char	*ft_custom_strdup(const char *src, char sep, char **tab)
{
	char	*dup;
	int		i;

	dup = ft_dup(src, sep);
	if (dup == NULL)
	{
		i = 0;
		while (tab[i])
			free(tab[i++]);
		free(tab);
	}
	return (dup);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		words;
	int		i;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	tab = malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s && *s == c)
			s++;
		tab[i] = ft_custom_strdup(s, c, tab);
		while (*s && *s != c)
			s++;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
