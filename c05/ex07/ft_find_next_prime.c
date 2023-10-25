/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkumari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:53:27 by nkumari           #+#    #+#             */
/*   Updated: 2023/08/28 13:25:16 by nkumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	num;

	num = 2;
	if (nb < 2)
		return (0);
	while (nb <= (nb / num))
	{
		if (nb % num == 0)
			return (0);
		num++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	is_prime;

	is_prime = ft_is_prime(nb);
	if (is_prime == 1)
		return (nb);
	else
		return (ft_find_next_prime (nb + 1));
}
/*int	main(void)
{
	printf("%d -> %d\n", 9, ft_find_next_prime(9));
	printf("%d -> %d\n", 4, ft_find_next_prime(4));
	return (0);
}*/
