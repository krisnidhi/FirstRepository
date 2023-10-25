/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkumari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:02:26 by nkumari           #+#    #+#             */
/*   Updated: 2023/08/26 17:28:58 by nkumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (&str[i]);
	while (str[i] != '\0' && to_find[j] != '\0')
	{
		if (to_find[j] == str[i])
		{
			i++;
			j++;
		}
		else
		{
			i++;
			j = 0;
		}
	}
	if (to_find[j] == '\0')
		return (&str[i - j]);
	else
		return (0);
}
/*int	main(void)
{
	
	char str [] = "Hi  i am Nidhi";
	char find [] = "am";
	printf("%s", ft_strstr(str,find));
	return (0);
}*/
