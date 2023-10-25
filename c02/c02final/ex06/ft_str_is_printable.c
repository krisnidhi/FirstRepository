/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkumari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:04:27 by nkumari           #+#    #+#             */
/*   Updated: 2023/08/22 17:37:30 by nkumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 32) && (str[i] <= 127)))
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	int result;
	char str0[] = "@";
	char str[] = "WELCOME";
	char str1[] = "bvhjg";
	char str2[] =  "\t";
	
	result =  ft_str_is_printable(str0);
	printf("%d\n", result);
	printf("%d\n", result);
	result = ft_str_is_printable(str1);
	printf("%d\n", result);
	result =  ft_str_is_printable(str2);
	printf("%d\n", result);
}*/
