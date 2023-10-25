/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkumari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:56:05 by nkumari           #+#    #+#             */
/*   Updated: 2023/08/22 17:35:19 by nkumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A') && (str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	int result;
	char str[] = "WELCOME";
	char str1[] = "bvhjg";
	char str2[] =  "12345";
	result =  ft_str_is_uppercase(str);;
	printf("%d\n", result);
	result = ft_str_is_uppercase(str1);
	printf("%d\n", result);
	result =  ft_str_is_uppercase(str2);
	printf("%d\n", result);
}*/
