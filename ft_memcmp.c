/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 00:24:16 by mrafik            #+#    #+#             */
/*   Updated: 2021/11/24 15:26:52 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*ptr;

	if (n == 0)
		return (0);
	i = 0;
	str = (unsigned char *) s1;
	ptr = (unsigned char *) s2;
	while ((ptr[i] == str[i]) && i < n - 1)
	{
		i++;
	}
	return (str[i] - ptr[i]);
}
