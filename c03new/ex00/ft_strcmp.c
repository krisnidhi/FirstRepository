/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkumari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:36:18 by nkumari           #+#    #+#             */
/*   Updated: 2023/08/27 10:47:40 by nkumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int	main(void)
{
	int result;
	int result2;
	char st1[] = "a";
	char st2[] = "aba";
	result = ft_strcmp(st1, st2);
	result2 =strcmp (st1, st2);
	printf("%d", result);
	printf("%d", result2);
	return (0);
	
}*/
