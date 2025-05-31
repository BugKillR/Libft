/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeskin <kkeskin@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 11:27:47 by kkeskin           #+#    #+#             */
/*   Updated: 2025/05/31 11:44:01 by kkeskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	char	*l;
	size_t		i;
	size_t		k;
	size_t		len2;
	
	b = (char *)big;
	l = (char *)little;
	i = 0;
	k = 0;
	len2 = ft_strlen(l);
	if (!little)
		return (b);
	while (i < len)
	{
		k = 0;
		while (b[i + k] == l[k])
			k++;
		if (k == len2)
			return (&b[i]);
		i++;
	}
	return (NULL);
}

#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strnstr("Abstract", "st", 3));
	return (0);
}
