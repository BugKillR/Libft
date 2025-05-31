/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeskin <kkeskin@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:43:16 by kkeskin           #+#    #+#             */
/*   Updated: 2025/05/31 17:54:26 by kkeskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t		i;
	size_t		end;

	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	end = start + len;
	while (start <= end)
	{
		substr[start] = s[start];
		start++;
	}
	return (substr);
}

#include <stdio.h>

int	main(void)
{
	char	arr[] = "Mavi deniz.";

	printf("%s\n", ft_substr(arr, 1, 3));
	return (0);
}
