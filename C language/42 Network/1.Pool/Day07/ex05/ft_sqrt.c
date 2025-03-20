/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:08:10 by inmili            #+#    #+#             */
/*   Updated: 2023/08/27 09:10:32 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int	ft_sqrt(int nb)
{
	int	i;
	i = 1;
	if (nb == 1)
		return (1);
	while (i <= nb / 2)
	{
		if (i * i == nb)
			return (i);
		else if (i * i > nb)
			break;
		i++;
	}
	return (0);
}
*/
int	ft_sqrt(int nb)
{
	int	i;
	int	j;
	int	c;

	i = 1;
	j = nb;
	c = 1;
	while (j > i)
	{
		j -= i;
		i += 2;
		c++;
	}
	if (i == j)
		return (c);
	return (0);
}
/*
int	main(void)
{
	printf("%d " ,ft_sqrt(121));
	return (0);
}
*/
