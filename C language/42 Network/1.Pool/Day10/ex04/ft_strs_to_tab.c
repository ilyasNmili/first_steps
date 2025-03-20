/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 07:56:14 by inmili            #+#    #+#             */
/*   Updated: 2023/09/04 12:56:23 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_size(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str1)
{
	unsigned int	i;
	char			*str2;

	str2 = (char *)malloc((ft_size(str1) + 1) * sizeof(*str1));
	i = 0;
	while (str1[i])
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stock;

	stock = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!stock)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stock[i].size = ft_size(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock[ac].size = 0;
	stock[ac].str = 0;
	stock[ac].copy = 0;
	return (stock);
}
