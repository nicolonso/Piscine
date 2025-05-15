/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:08:26 by nalfonso          #+#    #+#             */
/*   Updated: 2025/03/13 18:27:14 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	count;

	i = argc - 1;
	while (i >= 1)
	{
		count = 0;
		while (argv[i][count] != '\0')
		{
			write (1, &argv[i][count], 1);
			count++;
		}
		write (1, "\n", 1);
		i--;
	}
	return (0);
}
