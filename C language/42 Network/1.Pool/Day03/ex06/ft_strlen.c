/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 23:29:08 by inmili            #+#    #+#             */
/*   Updated: 2023/08/18 23:41:23 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*(str + size) != '\0')
	{
		size++;
	}
	return (size);
}

/*int main (void)
{
	char str[]="ilyasNmili";
	printf("%d",ft_strlen(str));
	return (0);
}
*/
