/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahroug <adahroug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 21:16:50 by adahroug          #+#    #+#             */
/*   Updated: 2024/06/21 19:17:35 by adahroug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char	*ptrs1;
	unsigned const char	*ptrs2;

	i = 0;
	ptrs1 = s1;
	ptrs2 = s2;
	if (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		if (ptrs1[i] != ptrs2[i])
		{
			return (ptrs1[i] - ptrs2[i]);
		}
		i++;
	}
	return (0);
}
