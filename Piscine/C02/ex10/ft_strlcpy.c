/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 23:36:05 by nalfonso          #+#    #+#             */
/*   Updated: 2025/03/07 20:31:05 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (src[j])
	{
		j++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}

/*#include <stdio.h>
int main(void)
{
    char src[] = "Hello, World!";
    char dest[] = "%&h";

	printf("%s\n", dest);
    printf("%d\n", ft_strlcpy(dest, src, 9));
    printf("%s\n", dest);

    return (0);
}*/