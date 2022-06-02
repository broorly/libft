/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:19:57 by mrafik            #+#    #+#             */
/*   Updated: 2021/11/24 15:38:44 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	int		j;
	char	*p;

	if (!s1)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && i < ft_strlen(s1))
		i++;
	while (ft_strrchr(set, s1[j]) && j > 0)
		j--;
	if (i == ft_strlen(s1) && j == 0)
		return (ft_strdup(""));
	p = ft_substr(s1, i, (j - i + 1));
	if (!p)
		return (NULL);
	return (p);
}
