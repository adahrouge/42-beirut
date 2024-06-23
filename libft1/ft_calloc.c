/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahroug <adahroug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 19:13:41 by adahroug          #+#    #+#             */
/*   Updated: 2024/06/21 19:08:47 by adahroug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char) c;
		i++;
	}
	return (ptr);
}

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	ptr = malloc(size * num);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_memset(ptr, 0, size * num);
	return (ptr);
}
