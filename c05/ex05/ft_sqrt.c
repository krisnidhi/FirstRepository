/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkumari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:34:09 by nkumari           #+#    #+#             */
/*   Updated: 2023/08/28 13:28:28 by nkumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long int	num;

	num = 1;
	if (nb <= 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	while (num <= 46340)
	{
		if (num * num == nb)
			return (num);
		num ++;
	}
	return (0);
}
/*int	main(void)
{
	int	number;

	number = 9;
	printf("%d" ,ft_sqrt(number));
	return (0);
}*/
