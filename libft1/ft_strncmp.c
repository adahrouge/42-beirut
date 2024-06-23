/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahroug <adahroug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 21:57:11 by adahroug          #+#    #+#             */
/*   Updated: 2024/06/21 20:30:53 by adahroug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stddef.h>

int	compare_chars(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		if (s1[i] == '\0' && s2[i] != '\0')
		{
			return (-(int)(unsigned char)s2[i]);
		}
		if (s2[i] == '\0' && s1[i] != '\0')
		{
			return ((int)(unsigned char)s1[i]);
		}
	}
	return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
	{
		return (0);
	}
	return (compare_chars(s1, s2, n));
}
