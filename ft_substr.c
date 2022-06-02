/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:15:47 by mrafik            #+#    #+#             */
/*   Updated: 2021/11/24 15:35:30 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	x;

	x = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	ptr = (char *)(malloc((len + 1) * sizeof(char)));
	if (!ptr)
		return (0);
	while (s[x] != '\0' && x < len)
	{
		ptr[x] = s[start];
		start++;
		x++;
	}
	ptr[x] = '\0';
	return (ptr);
}
