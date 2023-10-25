/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkumari <nkumari@student.hive,fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:15:45 by nkumari           #+#    #+#             */
/*   Updated: 2023/08/19 09:39:02 by nkumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

/*int	main(void)
{
	int *ptr1;
	int *ptr2;

	int	c;
	int	d;
	c = 63;
	d = 53;
	ptr1 =	&c;
	ptr2 =  &d;
	
	ft_swap(ptr1, ptr2);
    
	write (1, &c, 1);
	write(1, &d, 1);
	printf("%d", c);
	printf("%d", d);
	return (0);

}*/
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
