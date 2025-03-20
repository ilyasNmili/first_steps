/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 12:46:39 by inmili            #+#    #+#             */
/*   Updated: 2023/08/22 14:57:58 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_printable(unsigned char a)
{
	if (a >= 32 && a <= 126)
		return (1);
	return (0);
}

void	dec_to_hex(unsigned char c)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	ft_putchar(hexa[c / 16]);
	ft_putchar(hexa[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_printable((unsigned char)str[i]))
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			dec_to_hex((unsigned char)str[i]);
		}
		i++;
	}
}
/*
int main(void)
{
	char txt[]="Coucou\ntu vas bien ?";
	ft_putstr_non_printable(txt);
	return (0);
}
*/
