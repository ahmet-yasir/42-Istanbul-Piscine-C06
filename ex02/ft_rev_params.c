/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulaksi <akulaksi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:10:46 by akulaksi          #+#    #+#             */
/*   Updated: 2024/02/14 13:16:40 by akulaksi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc;
	while (i > 1)
	{
		j = 0;
		while (argv[i - 1][j] != '\0')
		{
			write(1, &argv[i - 1][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
