/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:35:53 by inmili            #+#    #+#             */
/*   Updated: 2023/08/24 18:32:52 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **T1, char **T2)
{
	char	*p;

	p = *T1;
	*T1 = *T2;
	*T2 = p;
}

void	affichage(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	ind_min;

	i = 1;
	while (i < argc - 1)
	{
		ind_min = i;
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[ind_min], argv[j]) > 0)
				ind_min = j;
			j++;
		}
		ft_swap(&argv[i], &argv[ind_min]);
		i++;
	}
	affichage(argc, argv);
	return (0);
}
