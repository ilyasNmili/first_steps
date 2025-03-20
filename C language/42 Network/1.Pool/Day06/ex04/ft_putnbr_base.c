/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 10:58:37 by inmili            #+#    #+#             */
/*   Updated: 2023/09/02 11:10:13 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_size(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	valide_base(char *base)
{
	int	i;
	int	j;
	int	size_base;

	i = 0;
	size_base = ft_size(base);
	if (size_base <= 1)
		return (0);
	while (i < size_base)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	i = -1;
	while (++i < size_base - 1)
	{
		j = i;
		while (++j < size_base)
		{
			if (base[j] == base[i])
				return (0);
		}
	}
	return (1);
}

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int		size_base;
	unsigned int		ui_nbr;

	size_base = ft_size(base);
	if (!valide_base(base))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	ui_nbr = (unsigned int)nbr;
	if (ui_nbr >= 0 && ui_nbr < size_base)
	{
		putchar(base[ui_nbr % size_base]);
		return ;
	}
	if (ui_nbr >= size_base)
	{
		ft_putnbr_base(ui_nbr / size_base, base);
		putchar(base[ui_nbr % size_base]);
	}
}
/*
int	main(void)
{
	char base[9]="poneyvif";
	int nbr = 700;
	ft_putnbr_base(nbr,base);
}
*/
