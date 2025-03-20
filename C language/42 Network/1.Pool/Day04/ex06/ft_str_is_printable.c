/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:11:37 by inmili            #+#    #+#             */
/*   Updated: 2023/08/21 22:49:57 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	b;
	int	i;

	b = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
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
	char	ch1[] = "abcd52D5-/=";

	printf("%d",ft_str_is_printable(ch1));
}
*/
