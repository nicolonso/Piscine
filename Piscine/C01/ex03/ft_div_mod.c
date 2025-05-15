/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 15:24:37 by nalfonso          #+#    #+#             */
/*   Updated: 2025/03/03 21:08:03 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int main(void)
{
	int	x;
	int	y;
	int	div;
	int	mod;

	x = 10;
	y = 3;
	ft_div_mod(x, y, &div, &mod);
	printf("Division = %d \n", div);
	printf("Moderator = %d \n", mod);
	return (0);
}*/
