/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 09:42:08 by inmili            #+#    #+#             */
/*   Updated: 2023/08/19 10:09:28 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	ind_min;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		ind_min = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[ind_min] > tab[j])
				ind_min = j;
			j++;
		}
		ft_swap (tab + ind_min, tab + i);
		i++;
	}
}

/*
int main(void)
{
	int Tab[]={1,0,3,2,5,-1};
	ft_sort_int_tab(Tab,6);
	int i=0;
	for(i=0;i<6;i++)
		printf("%d ",Tab[i]);
	return (0);
}
*/
