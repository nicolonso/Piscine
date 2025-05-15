/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 20:37:31 by nalfonso          #+#    #+#             */
/*   Updated: 2025/03/03 21:06:13 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;
	int	len;

	i = 0;
	len = size - 1;
	swap = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (tab[j] < tab[i + 1])
			{
				swap = tab[j];
				tab[j] = tab[i + 1];
				tab[i + 1] = swap;
			}
			j++;
		}
		i++;
	}
}

/*
#include <stdio.h>

int main(void)
{
	int i = 0;
	int tab[9] = {30,5,2,3,4,8,16,20,24};
	ft_sort_int_tab(tab, 9);
	while( i < 9)
	{
		printf("%d ", tab[i]);
		i++;
	}
}*/
