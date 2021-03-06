/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:15:03 by mrafik            #+#    #+#             */
/*   Updated: 2021/11/25 13:59:25 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*d;
	size_t	i;

	i = 0;
	d = (char *) s;
	while (i <= ft_strlen(s))
	{
		if (*(d + i) == c)
		{
			return (d + i);
		}
		i++;
	}
	return (0);
}
