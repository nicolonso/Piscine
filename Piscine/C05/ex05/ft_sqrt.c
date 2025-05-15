/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 18:19:23 by nalfonso          #+#    #+#             */
/*   Updated: 2025/03/15 18:19:25 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sqre;

	sqre = 0;
	if (nb < 0)
		return (0);
	while (sqre * sqre <= nb)
	{
		if ((sqre * sqre) == nb)
			return (sqre);
		sqre++;
	}
	return (0);
}

/*int main(void)
{
	int nb = 16;
	printf ("%d\n", ft_sqrt(nb));

}*/