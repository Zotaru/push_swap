/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_long.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 00:06:35 by amonier           #+#    #+#             */
/*   Updated: 2023/04/27 04:55:04 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

//check free lors de error

long long	ft_atoi_long(const char *string)
{
	long long	i;
	long long	sign;
	long long	res;

	res = 0;
	i = 0;
	sign = 1;
	while ((string[i] >= 9 && string[i] <= 13) || string[i] == 32)
		i++;
	if (string[i] == '+' || string[i] == '-')
	{
		if (string[i] == '-')
			sign *= (-1);
		i++;
	}
	while (string[i] >= '0' && string[i] <= '9')
	{
		res = res * 10 + string[i] - '0';
		i++;
	}
	return (res * sign);
}
