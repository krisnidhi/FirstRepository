/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkumari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:59:26 by nkumari           #+#    #+#             */
/*   Updated: 2023/08/21 17:53:34 by nkumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;

	x = *a / *b;
	*b = *a % *b;
	*a = x;
}
/*int	main(void)
{
	int p;
	int q;

	p =17;
	q = 4;
	ft_ultimate_div_mod(&p, &q);
  
	printf("%d\n",p);
	printf("%d", q);
    return (0);
}*/
