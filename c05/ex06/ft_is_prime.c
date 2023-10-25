/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkumari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:38:36 by nkumari           #+#    #+#             */
/*   Updated: 2023/08/31 17:43:56 by nkumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	num;

	num = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (num <= (nb / num))
	{
		if (nb % num == 0)
			return (0);
		num++;
	}
	return (1);
}
/*int	main(void)
{
	int num;
	num = 5;
	printf ("%d",ft_is_prime (num));
	return (0);
}*/
