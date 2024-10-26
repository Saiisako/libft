/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 00:44:51 by skock             #+#    #+#             */
/*   Updated: 2022/10/05 04:32:47 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *to = (unsigned char *)to;
	const unsigned char *from = (const unsigned char *)from;
	size_t i;
	i = 0;
	if (str_dest == str_src || n == 0)
	return (dest);
	if (str_dest)
}

int	main(void)
{
	char dest[11];
	char src[11] = "HelloWorld";

	printf("%s\n", dest);
	ft_memmove(dest, src, sizeof(dest));
	printf("%s\n", dest);
	return 0;
}