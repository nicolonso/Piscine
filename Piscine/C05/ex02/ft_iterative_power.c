/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 18:16:44 by nalfonso          #+#    #+#             */
/*   Updated: 2025/03/15 18:16:47 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	product;

	product = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (power > 1)
	{
		product *= nb;
		power--;
	}
	return (product);
}

/*int main (void)
{
	int nb = 5;
	int power = 3;
	printf ("%d\n", ft_iterative_power(nb, power));
	return 0;
}*/