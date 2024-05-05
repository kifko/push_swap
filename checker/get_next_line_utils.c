/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:32:17 by festeve-          #+#    #+#             */
/*   Updated: 2024/05/01 13:01:17 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

size_t	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len] != 0)
		len++;
	return (len);
}

char	*ft_substr(char *str_src, unsigned int start, size_t substrlen)
{
	size_t	i;
	size_t	j;
	char	*dest;

	i = 0;
	j = start;
	if (!str_src)
		return (NULL);
	if (substrlen == i || (j >= ft_strlen(str_src)))
		return (ft_strdup(""));
	if (ft_strlen(str_src) < substrlen)
		substrlen = ft_strlen(str_src);
	if (ft_strlen(str_src + j) < substrlen)
		substrlen = ft_strlen(str_src + j);
	dest = malloc(substrlen * sizeof(char) + 1);
	if (!dest)
		return (NULL);
	while (j < ft_strlen(str_src) && i < substrlen)
		dest[i++] = str_src[j++];
	dest[substrlen] = '\0';
	return (dest);
}

char	*ft_strdup(const char *src)
{
	int		i;
	char	*str;

	i = 0;
	if (!src)
		return (NULL);
	str = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (*src)
	{
		str[i] = *src;
		i++;
		src++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (!s1)
		s1 = ft_strdup("");
	if (!s2)
		return (NULL);
	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	free (s1);
	return (str);
}

int	search_newline(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (1);
	while (s[i])
	{
		if (s[i] == '\n')
			return (0);
		i++;
	}
	return (1);
}
