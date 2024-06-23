/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahroug <adahroug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 21:02:33 by adahroug          #+#    #+#             */
/*   Updated: 2024/06/21 19:15:40 by adahroug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;
	unsigned char		char_c;

	char_c = (unsigned char)c;
	ptr = s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == char_c)
		{
			return ((unsigned char *)&ptr[i]);
		}
		i++;
	}
	return (NULL);
}
