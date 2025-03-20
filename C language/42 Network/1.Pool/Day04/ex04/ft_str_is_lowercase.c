/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:00:31 by inmili            #+#    #+#             */
/*   Updated: 2023/08/21 18:40:28 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	b;
	int	i;

	b = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
	char	ch1[] = "abcd";

	printf("%d",ft_str_is_lowercase(ch1));
}
*/
