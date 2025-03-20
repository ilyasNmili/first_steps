/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:33:38 by inmili            #+#    #+#             */
/*   Updated: 2023/08/28 10:40:04 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
unsigned int	ft_size(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_dest;
	unsigned int	size_src;

	size_dest = ft_size(dest);
	size_src = ft_size(src);
	if (size <= size_dest)
		return (size + size_src);
	i = 0;
	while (src[i] && i < size - size_dest - 1)
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (size_dest + size_src);
}
/*
int main(void)
{
	char T1[7]="ilyas";
	char T2[6]="Nmili";

	printf("%u\n",ft_strlcat(T1,T2,6));
	printf("%s\n",T1);
	printf("%s",T2);
	return (0);
}
*/
