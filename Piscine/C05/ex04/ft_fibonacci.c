/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 18:18:12 by nalfonso          #+#    #+#             */
/*   Updated: 2025/03/15 18:18:14 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index >= 2)
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	return (0);
}

/*int main (void)
{
	printf ("%d\n", ft_fibonacci(25));    
	return 0;
}*/