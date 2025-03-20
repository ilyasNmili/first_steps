/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 08:14:59 by inmili            #+#    #+#             */
/*   Updated: 2023/08/23 19:10:02 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	size;
	unsigned int	i;

	i = 0;
	size = 0;
	while (dest[size] != '\0')
	{
		size++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[i + size] = '\0';
	return (dest);
}
/*
int main(void)
{
	char T1[]="Ilyas";
	char T2[]="Ilili";
	printf("%s",ft_strncat(T1,T2,2));
	return (0);
}
*/
