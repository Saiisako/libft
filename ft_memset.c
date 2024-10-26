/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 00:44:51 by skock             #+#    #+#             */
/*   Updated: 2022/10/05 04:32:47 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr = (unsigned char *)s;
	unsigned char value = (unsigned char)c;
	size_t	i;

	i = 0;

	while (i < n)
	{
		ptr[i] = value;
		i++;
	}
	return (s);
}

/*
int	main()
{
	char str[10];
	int	i;

	memset(str, 'X', sizeof(str));
	i = 0;
	while (i < sizeof(str))
	{
			printf("%c ", str[i]);
			i++;
	}
	return (0);
}
/*