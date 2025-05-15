/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:08:08 by nalfonso          #+#    #+#             */
/*   Updated: 2025/03/13 18:25:01 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	count;

	i = 1;
	while (i < argc)
	{
		count = 0;
		while (argv[i][count] != '\0')
		{
			write (1, &argv[i][count], 1);
			count++;
		}
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
