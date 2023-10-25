/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkumari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:13:46 by nkumari           #+#    #+#             */
/*   Updated: 2023/08/28 13:56:29 by nkumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	count;

	result = 1;
	count = 0;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (power > count)
	{
		result = result * nb;
		count++;
	}
	return (result);
}
/*int	main(void)
{
	int num;
	int power;
	printf("%d", ft_iterative_power(2,4));
	return (0);
}*/
