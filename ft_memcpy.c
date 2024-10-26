/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 00:44:51 by skock             #+#    #+#             */
/*   Updated: 2022/10/05 04:32:47 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *str_dest = (unsigned char *)dest;
	const unsigned char *str_src = (const unsigned char *)src;
	size_t i;

	i = 0;
	while (i < n)
	{
		str_dest[i] = str_src[i];
		i++;
	}
	return dest;
}
/*
int	main(void)
{
	char dest[11] = "Hi";
	char src[11] = "HelloWorld";

	printf("%s\n", dest);
	memcpy(dest, src, 2);
	printf("%s\n", dest);
	return 0;
} */