/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 08:07:56 by inmili            #+#    #+#             */
/*   Updated: 2023/08/23 19:06:42 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
char	*ft_strcat(char *dest, char *src)
{
	int	size;
	int	i;

	i = 0;
	size = 0;
	while (dest[size] != '\0')
	{
		size++;
	}
	while (src[i] != '\0')
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	T1[]="ilyas";
	char	T2[]="Nmili";
	printf("%s",ft_strcat(T1, T2));
}
*/
