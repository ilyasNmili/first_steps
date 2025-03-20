/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:57:48 by inmili            #+#    #+#             */
/*   Updated: 2023/08/21 18:31:18 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	b;
	int	i;

	b = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z' ) && (str[i] < 'A' || str[i] > 'Z' ))
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
	char	ch1[] = "abcA66";

	printf("%d",ft_str_is_alpha(ch1));
}
*/
