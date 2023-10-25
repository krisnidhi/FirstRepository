/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkumari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 09:42:52 by nkumari           #+#    #+#             */
/*   Updated: 2023/08/26 18:10:39 by nkumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
//char *ft_strcat(char *dest, char *src);
char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
		dest[i] = '\0';
	return (dest);
}
/*int	main(void)
{
	int result;
	char ex1[] = "Hello";
	char ex2[] = "world";
	result = printf("%s", ft_strcat(ex1, ex2));
	return (0);
}*/
