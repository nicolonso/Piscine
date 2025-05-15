/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 18:17:40 by nalfonso          #+#    #+#             */
/*   Updated: 2025/03/15 18:17:41 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1 || nb == 1)
		return (nb);
	return ((nb * ft_recursive_power(nb, power - 1)));
}

/*int main(void)
{
	int nb = 5;
	int power = 3;
	printf("%d\n", ft_recursive_power(nb, power));
	return (0);
}*/
