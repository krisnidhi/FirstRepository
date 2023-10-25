/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkumari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:28:46 by nkumari           #+#    #+#             */
/*   Updated: 2023/08/27 13:20:33 by nkumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign_count;
	int	i;

	result = 0;
	sign_count = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign_count = sign_count * (-1);
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10;
		result = result + str[i] -48;
		i++;
	}
	result = result * sign_count;
	return (result);
}
/*int	main(void)
{
	char str[] = " ---+--+1234ab567";
	
	printf("%d" ,ft_atoi( str));
	return (0);
}*/
