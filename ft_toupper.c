/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:07:56 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/02 14:08:48 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (ft_islower(c) == 1)
		return (c - 32);
	else
		return (c);
}

/*
// === BEGINNING OF MY TEST === //

#include <stdio.h>
#include <ctype.h>

int	main()
{
	int	test_1;
	int	test_2;

	test_1 = 'b';
	test_2 = '6';
	printf("result toupper on 'b'		:	%d\n", toupper(test_1));
	printf("result ft_toupper on 'b'	:	%d\n", ft_toupper(test_1));
	printf("result toupper on '6'		:	%d\n", toupper(test_2));
	printf("result ft_toupper on '6'	:	%d\n", ft_toupper(test_2));
	return (0);
}

// === END OF MY TEST === //
*/