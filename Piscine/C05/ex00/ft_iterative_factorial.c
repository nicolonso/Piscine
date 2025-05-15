/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 23:01:42 by nalfonso          #+#    #+#             */
/*   Updated: 2025/03/13 23:01:45 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (nb > 1)
	{
		i *= nb;
		--nb;
	}
	return (i);
}

/*#include <stdio.h>

int	main (void)
{
	int n;

	n = 8;
	printf("%d",ft_iterative_factorial(n));
	printf("\n");
}*/