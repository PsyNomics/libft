/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byeokim <byeokim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:04:16 by byeokim           #+#    #+#             */
/*   Updated: 2021/11/17 17:16:06 by byeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	str_len;
	char	*result;

	str_len = ft_strlen(str);
	result = (char *)malloc(sizeof(char) * (str_len + 1));
	if (!result)
		return (0);
	while (*str != '\0')
		*result++ = *str++;
	*result = '\0';
	return (result - str_len);
}
