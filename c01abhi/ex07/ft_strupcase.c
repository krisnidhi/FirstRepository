/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkumari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 08:34:25 by nkumari           #+#    #+#             */
/*   Updated: 2023/08/22 17:42:38 by nkumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] >= 'a' && str[i] <= 'z')))
		{
			str[i] -= 32;
			i++;
		}
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char str[] = "heLlo";
	ft_strupcase(str);
	printf("%s", ft_strupcase(str));
	return (0);


}*/
