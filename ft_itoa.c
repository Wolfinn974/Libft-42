/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpayet <lpayet@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:49:56 by lpayet            #+#    #+#             */
/*   Updated: 2024/04/18 16:27:08 by lpayet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	c_size(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*result;
	long	nb;

	nb = n;
	count = c_size(nb);
	result = malloc(sizeof(char) * (count + 1));
	if (!result)
		return (NULL);
	result[count--] = '\0';
	if (nb < 0)
	{
		nb *= -1;
		result[0] = '-';
	}
	if (nb == 0)
		result[0] = '0';
	while (nb != 0)
	{
		result[count--] = '0' + (nb % 10);
		nb /= 10;
	}
	return (result);
}
