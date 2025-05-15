/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 18:28:37 by nalfonso          #+#    #+#             */
/*   Updated: 2025/03/10 20:32:35 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *des, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (des[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		des[i + j] = src[j];
		j++;
	}
	des[i + j] = '\0';
	return (des);
}

/*#include <stdio.h>

int main(void)
{
	char dest[30] = "Hello ,";
	char src[] = "world!";

	printf("This is the result %s", ft_strcat(dest, src));

}*/
