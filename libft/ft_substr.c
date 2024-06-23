/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahroug <adahroug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 20:00:35 by adahroug          #+#    #+#             */
/*   Updated: 2024/06/21 20:43:58 by adahroug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*ptr;

	j = 0;
	i = 0;
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (NULL);
	}
	while (s[i + start] != '\0' && i < len)
	{
		ptr[j] = s[i + start];
		i++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
