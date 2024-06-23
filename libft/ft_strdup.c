/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahroug <adahroug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 19:38:18 by adahroug          #+#    #+#             */
/*   Updated: 2024/06/21 19:42:40 by adahroug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *s1)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *s)
{
	int		j;
	int		k;
	int		length;
	char	*ptr;

	j = 0;
	k = 0;
	length = ft_strlen(s);
	ptr = malloc(length + 1 * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (s[j] != '\0')
	{
		ptr[k] = s[j];
		k++;
		j++;
	}
	ptr[k] = '\0';
	return (ptr);
}
