/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahroug <adahroug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 19:41:04 by adahroug          #+#    #+#             */
/*   Updated: 2024/06/21 20:52:24 by adahroug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy_forward(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

void	*ft_memcpy_backward(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	i = n;
	while (i > 0)
	{
		d[i - 1] = s[i - 1];
		i--;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest == src || n == 0)
	{
		return (dest);
	}
	if (dest > src)
	{
		return (ft_memcpy_backward(dest, src, n));
	}
	else
	{
		return (ft_memcpy_forward(dest, src, n));
	}
}
