/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <wharinas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 02:50:54 by wharinas          #+#    #+#             */
/*   Updated: 2022/05/10 03:34:33 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <test.h>

void	test_ft_putchar(void)
{
	printf("TEST FT_PUTCHAR: \n");
	ft_putchar('a', 1);
	ft_putchar('1', 1);
	printf("\n\n");
}