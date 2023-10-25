/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkumari <nkumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:56:33 by nkumari           #+#    #+#             */
/*   Updated: 2023/08/19 10:01:41 by nkumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (*str != '\0')
	{
		str++;
		a++;
	}
	return (a);
}
/*int	main (void)
{
	int p;
	p = ft_strlen("hello");
	printf("string length is %d",p);
	
	return  (0);
}*/
