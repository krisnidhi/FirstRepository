/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkumari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:51:17 by nkumari           #+#    #+#             */
/*   Updated: 2023/08/19 09:45:48 by nkumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int	main(void)
{
	int	a;
	int	b;
	int	div;
	int mod;
	a = 14;
	b = 2;
	a = 33;
	b = 4;


	ft_div_mod(a, b,  &div, &mod);
	printf("%d\n", div);
	printf("%d", mod);
	write (1, div, 1);
	write(1, mod, 1);

	return (0);

}*/
