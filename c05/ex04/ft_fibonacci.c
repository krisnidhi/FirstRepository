/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkumari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:19:38 by nkumari           #+#    #+#             */
/*   Updated: 2023/08/28 13:27:54 by nkumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index <= 1)
		return (index);
	else
		return (ft_fibonacci (index - 1) + ft_fibonacci (index - 2));
}
/*int	main(void)
{
	int  num;
	num  = 5;
	printf("%d",ft_fibonacci(num));
			return (0);
}*/
