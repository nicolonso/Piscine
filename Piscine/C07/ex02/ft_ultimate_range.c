/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 18:44:03 by nalfonso          #+#    #+#             */
/*   Updated: 2025/03/18 21:00:42 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*ptr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	*range = ptr;
	return (i);
}

/*int main()
{
	int size;
	int *range;
	int i = 0;

	size = ft_ultimate_range(&range, 5, 10);
	if (size == -1)
	{	printf("Memory allocation failed\n");
		return (1);
	}
	printf ("Size : %d\n", size);
	while (i < size)
	{
		printf("%d",range[i]);
		printf(",");
		i++;
	}
	printf("\n");
	free (range);
	return (0);
}*/
