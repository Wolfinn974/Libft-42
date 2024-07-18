/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpayet <lpayet@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:10:14 by lpayet            #+#    #+#             */
/*   Updated: 2024/04/17 19:10:16 by lpayet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void	*b_pointer;

	b_pointer = b;
	while (len--)
		*(unsigned char *)b++ = (unsigned char)c;
	return (b_pointer);
}
