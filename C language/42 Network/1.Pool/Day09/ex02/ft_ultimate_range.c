/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:57:01 by inmili            #+#    #+#             */
/*   Updated: 2023/08/31 12:29:00 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof(int));
	if (!(*range))
		return (-1);
	i = 0;
	while (i < max - min)
	{
		*(*range + i) = i + min;
		i++;
	}
	return (i);
}
/*
int main(void)
{
	int  *range;
	ft_ultimate_range(&range, 9, 19);
	int i = 0;
	while(i < 20)	
	{
		printf("%d ",range[i]);
		i++;
	}
		return (0);
}
*/
