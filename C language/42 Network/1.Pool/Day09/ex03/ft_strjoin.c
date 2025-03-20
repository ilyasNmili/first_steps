/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:26:05 by inmili            #+#    #+#             */
/*   Updated: 2023/09/02 10:07:45 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	total_len(int size, char **strs)
{
	int	total;
	int	i;
	int	j;

	i = 0;
	total = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			total++;
			j++;
		}
		i++;
	}
	return (total);
}

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total;
	char	*ret;

	if (size <= 0)
	{
		ret = (char *)malloc(sizeof(char));
		ret[0] = '\0';
		return (ret);
	}
	total = total_len(size, strs) + ft_len(sep) * (size - 1);
	ret = (char *)malloc((total + 1) * sizeof(char));
	i = 0;
	while (i < size)
	{
		ft_strcat(ret, strs[i]);
		if (i != size - 1)
			ft_strcat(ret, sep);
		i++;
	}
	ret[total] = '\0';
	return (ret);
}
/*
int main(void)
{
	char *strs[4] = {"ilyas","Nmili","Nmili","ilyas"};
	char *sep = " ,";
	
	printf("%s",ft_strjoin(4,strs,sep));
}
*/
