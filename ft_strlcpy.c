/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 00:44:51 by skock             #+#    #+#             */
/*   Updated: 2022/10/05 04:32:47 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	j;

	j = 0;
	if (size > 0)
	{
		while (src[j] != '\0' && j < (size - 1))
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	dest[] = "hello";
	const char	src[] = "world";
	size_t	length;

	puts(dest);

	length = ft_strlcpy(dest, src, 2);

	puts(dest);
	printf("%ld", length);
	return 0;
}
*/