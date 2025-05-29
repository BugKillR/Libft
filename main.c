/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeskin <kkeskin@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:47:47 by kkeskin           #+#    #+#             */
/*   Updated: 2025/05/29 17:29:33 by kkeskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	arr[] = {0, 1};

	ft_memset(arr, 255, 4);
	ft_memset(arr, 231, 2);
	ft_memset(arr, 0, 1);
	ft_putnbr_fd(arr[0], 1);
	ft_putchar_fd('\n', 1);
	//ft_bzero(arr, 4);
	//ft_memcpy(arr + 1, arr, 4);
	ft_memmove(arr + 1, arr, 4);
	ft_putnbr_fd(arr[1], 1);
	ft_putchar_fd('\n', 1);
	return (0);
}
