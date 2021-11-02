/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:57:01 by llethuil          #+#    #+#             */
/*   Updated: 2021/10/25 23:55:30 by llethuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (ft_isupper(c) == 1)
		return (c + 32);
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

	test_1 = 'B';
	test_2 = '6';
	printf("result tolower on 'B'		:	%d\n", tolower(test_1));
	printf("result ft_tolower on 'B'	: 	%d\n", ft_tolower(test_1));
	printf("result tolower on '6'		: 	%d\n", tolower(test_2));
	printf("result ft_tolower on '6'	: 	%d\n", ft_tolower(test_2));
	return (0);
}

// === END OF MY TEST === //
*/