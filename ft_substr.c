/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byeokim <byeokim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:02:24 by byeokim           #+#    #+#             */
/*   Updated: 2021/11/17 19:03:24 by byeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned start, size_t len)
{
	char	*result;
	size_t	s_len;
	size_t	i;

	if (str == NULL)
		return (NULL);
	s_len = ft_strlen(str);
	if (s_len < start)
		return (ft_strdup(""));
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len && i < s_len - start)
	{
		*result++ = *(str + start + i);
		i++;
	}
	*result = '\0';
}
