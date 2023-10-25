/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkumari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:25:52 by nkumari           #+#    #+#             */
/*   Updated: 2023/08/28 13:27:29 by nkumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if ((power == 0 && nb == 0) || (power == 0))
		return (1);
	else if (power < 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*int	main(void)
 
{
	int num;
	int power;
	num = 2;
	power =4;
 printf("%d", ft_recursive_power(num, power));
			return (0);
}*/
