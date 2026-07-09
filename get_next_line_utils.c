/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ra <mruiz-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 12:41:15 by mruiz-ra          #+#    #+#             */
/*   Updated: 2026/07/09 13:40:41 by mruiz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t		index;

	index = 0;
	while (s2[index])
		index++;
	return (index);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	index;

	index = 0;
	if (!s)
		return (NULL);
	while (s[index])
	{
		if (s[index] == (char) c)
			return ((char *) &s[index]);
		index++;
	}
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	index_s;
	size_t	index_result;

	index_s = 0;
	index_result = 0;
	if (!s1)
		s1 = "";
	result = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!result)
		return (NULL);
	while (s1[index_s])
		result[index_result++] = s1[index_s++];
	index_s = 0;
	while (s2[index_s])
		result[index_result++] = s2[index_s++];
	result[index_result] = '\0';
	return (result);
}