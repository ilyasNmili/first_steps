/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:36:38 by inmili            #+#    #+#             */
/*   Updated: 2023/08/31 12:29:56 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	if (min >= max)
		return (0);
	tab = (int *)malloc((max - min) * sizeof(int));
	if (!tab)
		return (0);
	i = 0;
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
int main(void)
{
	int	i ;

	int	*Tab = ft_range(2, 7);

	i = 0;
	while (i < 6)
	{	printf("%d ",Tab[i]);
		i++;
	}
	free(Tab);
	return (0);
}
*/
