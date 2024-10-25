/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 00:44:51 by skock             #+#    #+#             */
/*   Updated: 2022/10/05 04:32:47 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
	size_t	i;

	if (str == NULL)
		return (NULL);
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char) c)
		{
			return ((char *)&str[i]);
		}
		i--;
	}
	return (NULL);
}

int	main(void)
{
	char str[] = "comment ca va";
	char *ptr;
	int i = 'c';

	ptr = ft_strrchr(str, i);
	printf("il y a %c, dans : %s, ici : %s", i, str, ptr);
	return 0;
}