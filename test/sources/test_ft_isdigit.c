/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <wharinas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 02:50:54 by wharinas          #+#    #+#             */
/*   Updated: 2022/05/10 03:34:40 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <test.h>

void	test_ft_isdigit(void)
{
	printf("TEST FT_ISDIGIT: \n");
	printf("1 : %d\n", ft_isdigit(1));
	printf("A : %d\n", ft_isdigit('A'));
}