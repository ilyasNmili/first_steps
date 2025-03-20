/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:02:47 by inmili            #+#    #+#             */
/*   Updated: 2023/08/26 09:33:47 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	signe_n;
	int	i;
	int	res;

	i = 0;
	res = 0;
	signe_n = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe_n++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = 10 * res + (str[i] - '0');
		i++;
	}
	if (signe_n % 2 == 0)
		return (res);
	else
		return (-res);
}
/*
int main(void)
{
	char str[]="	  --0";
	int i;

	i = ft_atoi(str);
	printf("%d",i);
	return (0);
}
*/
