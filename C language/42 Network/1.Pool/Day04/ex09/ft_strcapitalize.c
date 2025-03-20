/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:36:33 by inmili            #+#    #+#             */
/*   Updated: 2023/08/22 11:05:55 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i ;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += ('a' - 'A');
		}
		i++;
	}
	return (str);
}

int	isalphnum(char c)
{
	int	b;

	b = 0;
	if (c >= 'a' && c <= 'z')
		b = 1;
	else if (c >= 'A' && c <= 'Z')
		b = 1;
	else if (c >= '0' && c <= '9')
		b = 1;
	return (b);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	b;

	i = 0;
	b = 1;
	ft_strlowcase(str);
	while (str[I])
	{
		if (isalphnum(str[i]) == 0)//is not alphnum
		{
			b = 1;
		}
		else 
		{
			if (b == 1 && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] += ('A' - 'a');
			}
			b = 0;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	ch1[] = "salut, comMent tu vas ? 42mots quarante-deux; cinquante+et+un";;

	puts(ft_strcapitalize(ch1));

}
*/
