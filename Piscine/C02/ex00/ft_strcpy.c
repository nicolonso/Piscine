/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:26:49 by nalfonso          #+#    #+#             */
/*   Updated: 2025/03/06 19:42:42 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>
int main()
{
	char dest[20] = "TwentyOne";
	char src[20] = "FortyTwo";
	
	printf("Before the copy: %s\n", dest);
	ft_strcpy(dest, src);
	printf("After the copy: %s", dest);
}*/
