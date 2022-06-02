/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:15:11 by mrafik            #+#    #+#             */
/*   Updated: 2021/11/24 20:31:48 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	x;
	size_t	d;

	x = 0;
	if (!dest && size == 0)
		return (ft_strlen(src));
	i = ft_strlen(dest);
	d = i;
	if (d < size)
	{
		while (i < size - 1 && src[x])
		{
			dest[i] = src[x];
			i++;
			x++;
		}
		dest[i] = '\0';
	}
	else if (d >= size)
		d = size;
	return (d + ft_strlen(src));
}
