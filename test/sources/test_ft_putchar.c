/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <wharinas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 02:50:54 by wharinas          #+#    #+#             */
/*   Updated: 2022/05/12 01:15:38 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <test.h>

void	test_ft_putchar(void)
{
	printf("TEST FT_PUTCHAR: \n");
	ft_putchar_fd('a', 1);
	ft_putchar_fd('1', 1);
	printf("\n\n");
}