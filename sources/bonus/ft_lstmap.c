/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <wharinas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 01:38:32 by wharinas          #+#    #+#             */
/*   Updated: 2022/05/12 02:10:40 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*new;

	if (lst == NULL || f == NULL)
		return (NULL);
	new = NULL;
	while (lst)
	{
		map = ft_lstnew((*f)(lst->content));
		if (!map)
		{
			ft_lstclear(&new, (*del));
			return (map);
		}
		ft_lstadd_back(&new, map);
		lst = lst->next;
	}
	return (new);
}
