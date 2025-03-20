/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:38:43 by ilyasNmili        #+#    #+#             */
/*   Updated: 2024/01/08 17:33:33 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*p1 && *p2 && *p1 == *p2 && n > 1)
	{
		p1++;
		p2++;
		n--;
	}
	return ((*p1 - *p2));
}
/*
int main(void)
{
	char *T1;
	char *T2;
	T1="teste";
	T2="testex";
	printf("%d",ft_strncmp(T1,T2,6));
	return (0);
}
*/