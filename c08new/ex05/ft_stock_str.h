/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkumari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:29:24 by nkumari           #+#    #+#             */
/*   Updated: 2023/08/31 17:29:26 by nkumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);

#endif
