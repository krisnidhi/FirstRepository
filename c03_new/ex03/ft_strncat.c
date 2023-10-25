/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkumari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:08:27 by nkumari           #+#    #+#             */
/*   Updated: 2023/08/26 17:27:23 by nkumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while ((src[j] != '\0') && j < nb)
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
	int result1;
	int num;
	char d1[15] = "Hello i";
	char s1[] = "am Nidhi";
	result = printf("%s",ft_strncat( d1,s1,4));
	result1 = printf("%s",strncat( d1,s1,4));
	return(0);
}*/
