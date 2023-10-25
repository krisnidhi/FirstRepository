/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkumari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:33:14 by nkumari           #+#    #+#             */
/*   Updated: 2023/08/22 18:21:15 by nkumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(((str[i] >= '0') && (str[i] <= '9'))))
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	int result;
	char str[] = "welcome";
	char str1[] = "";

	char str2[] =  "12345";
	result =  ft_str_is_numeric(str);
	printf("%d\n", result);
	result = ft_str_is_numeric(str1);
	printf("%d\n", result);
	result =  ft_str_is_numeric(str2);
	printf("%d\n", result);
}*/
