/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 02:06:01 by nalfonso          #+#    #+#             */
/*   Updated: 2025/03/18 21:08:42 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len_str;
	int		index;

	len_str = 0;
	index = 0;
	len_str = ft_str_len(src);
	dest = malloc (sizeof(char) * (len_str + 1));
	if (dest == NULL)
		return (NULL);
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

/*int main (void)
{
	char *original;
	char *duplicate;

	original = "Hi, how are you?";
	duplicate = ft_strdup(original);
	if (duplicate == NULL)
		printf ("Memory allocation failed\n");
	printf("Original : %s",original);
	printf("\n");
	printf("Duplicate : %s",duplicate);
	printf("\n");
	return (0);
}*/
