/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 21:12:26 by nalfonso          #+#    #+#             */
/*   Updated: 2025/03/10 20:38:15 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlenght(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	j = ft_strlenght(dest);
	i = ft_strlenght(src);
	if (size == 0 || j >= size)
		return (j + i);
	k = 0;
	while (src[k] != '\0' && j + k < (size - 1))
	{
		dest[j + k] = src[k];
		k++;
	}
	dest[j + k] = '\0';
	return (i + j);
}

/*#include <stdio.h>

int main(void)
{
	char dest[14] = "Hello ,";
	char src[] = "world!";
	unsigned int Result = ft_strlcat(dest, src, sizeof(dest));

	printf("The lenght is:%u\n",Result);
	printf("Teh result is : %s\n", dest);
	return (0);
}*/
