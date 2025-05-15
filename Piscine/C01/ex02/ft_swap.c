/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:44:08 by nalfonso          #+#    #+#             */
/*   Updated: 2025/03/02 16:27:49 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 15;
	printf("Before swap : x = %d ,y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("After swap : x = %d ,y = %d\n", x, y);
	return (0);
}*/
