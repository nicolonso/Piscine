/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 18:42:56 by nalfonso          #+#    #+#             */
/*   Updated: 2025/03/03 21:20:37 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;
	int	len;

	i = 0;
	swap = 0;
	len = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[len];
		tab[len] = swap;
		i++;
		len--;
	}
}

#include <stdio.h>

int	main(void)
{
	int x[] = {1, 2, 3, 4, 5};
	int size = sizeof(x) / sizeof(x[0]);
	int j = 0;

	printf("Before:");
         while(j < size)
          {
                  printf(" %d ,",x[j]);
                  j++;
	  }
        printf("size = %d", size);
	printf("\n");
	ft_rev_int_tab(x, size);

	int i = 0;

	printf("After :");
	while(i < size)
	{
		printf("%d ,",x[i]);
		i++;
	}
	printf("\n");
	return (0);
}
