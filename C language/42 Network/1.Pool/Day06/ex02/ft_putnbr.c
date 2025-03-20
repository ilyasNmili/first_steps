/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:29:35 by inmili            #+#    #+#             */
/*   Updated: 2023/08/24 14:01:38 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	puissance(int n)
{
	int	p;

	p = 1;
	while (n != 0)
	{
		p *= 10;
		n--;
	}
	return (p);
}

int	size(int n)
{
	int	s;

	s = 0;
	while (n != 0)
	{
		s++;
		n /= 10;
	}
	return (s);
}

void	ft_putnbr(int nb)
{
	int	first_digit;
	int	s;

	if (nb == 0)
		write(1, "0", 1);
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else
	{
		s = size(nb);
		while (s > 0)
		{
			first_digit = nb / puissance(s - 1);
			nb -= first_digit * puissance(s - 1);
			s--;
			ft_putchar(48 + first_digit);
		}
	}
}
/*
int main(void)
{
	int a=-2147483647;

	ft_putnbr(a);
	return (0);
}
*/
