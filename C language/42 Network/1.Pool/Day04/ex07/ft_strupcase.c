/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:21:33 by inmili            #+#    #+#             */
/*   Updated: 2023/08/21 19:02:35 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0') 
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] += ('A' - 'a');
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	ch1[] = "Aase5";

	printf("%s",ft_strupcase(ch1));
}
*/
