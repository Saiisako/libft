/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 00:44:51 by skock             #+#    #+#             */
/*   Updated: 2022/10/05 04:32:47 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_iswhitespace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;
	int	j;

	result = 0;
	sign = 1;
	i = -1;
	j = 0;
	while (str[++i] != '\0')
	{
		if (ft_iswhitespace(str[i]) == 1)
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign = sign * (-1);
			i++;
			if (j++ > 0)
				return (0);
		}
		if (ft_isdigit(str[i]) == 1)
			result = (result * 10) + str[i] - '0';
	}
	return (result * sign);
}
/*
int	main(void)
{
	char	str[] = "-90abc";
	int		result;
	int		result2;

	puts("voici str avant atoi ");
	puts(str);

	result = ft_atoi(str);
	result2 = atoi(str);

	printf("%d\n%d\n", result, result2);

	return 0;
} */