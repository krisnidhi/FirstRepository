/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkumari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:14:13 by nkumari           #+#    #+#             */
/*   Updated: 2023/08/22 18:19:57 by nkumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(((str[i] >= 'A') && (str[i] <= 'Z')) || (
					(str[i] >= 'a') && (str[i] <= 'z'))))
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
	result =  ft_str_is_alpha(str);
	printf("%d\n", result);
	result = ft_str_is_alpha(str1);
	printf("%d\n", result);
	result =  ft_str_is_alpha(str2);
	printf("%d\n", result);
}*/
