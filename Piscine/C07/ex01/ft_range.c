/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 18:43:46 by nalfonso          #+#    #+#             */
/*   Updated: 2025/03/18 20:59:20 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*array;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

/*int main(void)
{
	int max = 10;
	int min = 5;
	int *range = ft_range(min, max);
	int i = 0;

	if (range == NULL)
		return (-1);
	while (i < max - min)
	{
		printf("%d",range[i]);
		i++;
	}
	printf("\n");
	free(range);
	return (0);
}*/
