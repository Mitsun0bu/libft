/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:35:38 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/10 16:27:00 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	trimmed = 0;
	if (s1 != 0 && set != 0)
	{
		start = 0;
		end = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]) != NULL)
			start ++;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) != NULL
			&& end > start)
			end --;
		trimmed = malloc (sizeof(char) * (end - start + 1));
		if (trimmed == NULL)
			return (NULL);
		ft_strlcpy(trimmed, &s1[start], end - start + 1);
	}
	return (trimmed);
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>

int	main()
{
	char	s1[50] = "****";
	char	set[50] = "*";

	printf("s1 : %s\n", s1);
	printf("set : %s\n", set);

	//	My function
	printf("Result of ft_strtrim : %s\n", ft_strtrim(s1, set));
	return (0);
}

// === END OF MY TEST ===
*/
