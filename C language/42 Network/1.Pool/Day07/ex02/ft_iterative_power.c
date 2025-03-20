/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 09:56:02 by inmili            #+#    #+#             */
/*   Updated: 2023/08/26 10:03:47 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	if (power < 0)
		return (0);
	i = 1;
	res = 1;
	while (i <= power)
	{
		res *= nb;
		i++;
	}
	return (res);
}
/*
int	main(void)
{
	int i = ft_iterative_power(0, 0);
	printf("%d ",i);
	return (0);
}
*/
