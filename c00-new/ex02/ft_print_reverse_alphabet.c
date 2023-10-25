/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkumari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:52:56 by nkumari           #+#    #+#             */
/*   Updated: 2023/08/14 08:37:01 by nkumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char	reversealphabet;

	reversealphabet = 'z';
	while (reversealphabet >= 'a')
	{
		write(1, &reversealphabet, 1);
		reversealphabet--;
	}
}
