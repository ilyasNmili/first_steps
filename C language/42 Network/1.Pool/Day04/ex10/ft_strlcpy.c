/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:23:42 by inmili            #+#    #+#             */
/*   Updated: 2023/08/22 11:42:03 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (*src )
	{
		src++;
	}
	while (*src && size > 1)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	*dest = '\0';
	return (i);
}
/*
int	main(void)
{
	char	ch1[] = "abdo";
	char	ch2[] = "o";

	printf("%u\n",ft_strlcpy(ch1, ch2, 1));

	printf("%s   %s",ch1,ch2);
	return (0);
}
*/
