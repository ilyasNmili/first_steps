/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:09:46 by inmili            #+#    #+#             */
/*   Updated: 2023/08/21 18:35:15 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	b;
	int	i;

	b = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			b = 0;
			break ;
		}
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	char	ch1[] = "65";

	printf("%d",ft_str_is_numeric(ch1));
}
*/
