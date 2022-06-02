/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:10:09 by mrafik            #+#    #+#             */
/*   Updated: 2021/11/25 13:51:13 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static void	f(char const *s1, char const *s2, char *str)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	while (i < ft_strlen(s1))
	{
		str[c] = s1[i];
		i++;
		c++;
	}
	i = 0;
	while (i < ft_strlen(s2))
	{
		str[c] = s2[i];
		i++;
		c++;
	}
	str[c] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		x;
	int		c;

	c = 0;
	if (!s1 || !s2)
		return (0);
	x = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *) malloc((x) * sizeof(char));
	if (!str)
		return (0);
	if (c < x)
	{
		f(s1, s2, str);
	}
	return (str);
}
