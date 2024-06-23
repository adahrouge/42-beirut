/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahroug <adahroug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:03:42 by adahroug          #+#    #+#             */
/*   Updated: 2024/06/22 01:16:22 by adahroug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		return (1);
	}
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*convert_digit(int n, char *ptr, int counter)
{
	int	i;

	i = counter - 2;
	if (n < 0)
	{
		ptr[0] = '-';
		if (n == INT_MIN)
		{
			n = -(n + 1);
			ptr[i--] = ((n % 10) + 1) + '0';
			n /= 10;
		}
		else
			n = -n;
	}
	while (n != 0)
	{
		ptr[i--] = (n % 10) + '0';
		n = n / 10;
	}
	ptr[counter - 1] = '\0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	int		counter;
	char	*ptr;

	counter = count_digits(n) + 1;
	if (n < 0)
		counter = counter + 1;
	ptr = malloc(counter * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	if (n != 0)
		convert_digit(n, ptr, counter);
	else
	{
		ptr[0] = '0';
		ptr[1] = '\0';
		return (ptr);
	}
	return (ptr);
}
