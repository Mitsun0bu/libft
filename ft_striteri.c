/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:56:11 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/04 17:19:03 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i ++;
	}
}

/*
// === BEGINNING OF MY TEST === //

#include <stdio.h>

void	ft_iteration(unsigned int iterator, char *s)
{
    char iterated;

    iterated = *s + ;
}

int	main()
{
	char *s = "HELLO WORLD";

	ft_striteri(s, &ft_iteration);
	printf("%s", s);
	return (0);
}

// === END OF MY TEST === //
*/
