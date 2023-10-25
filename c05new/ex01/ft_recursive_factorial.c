/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkumari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:04:25 by nkumari           #+#    #+#             */
/*   Updated: 2023/08/28 14:02:13 by nkumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb >= 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (0);
}
/*int	main(void)
{
	int num;
	num = 6;
	printf("After recurssion = %d", ft_recursive_factorial(num));
}*/
