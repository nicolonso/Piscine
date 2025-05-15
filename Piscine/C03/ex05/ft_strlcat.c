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

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	des_len;
	unsigned int	copy_len;
	unsigned int	buffer;

	des_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= des_len)
		return (size + src_len);
	copy_len = 0;
	buffer = size - des_len - 1;
	while (src[copy_len] != '\0' && copy_len < buffer)//copy_lengt + dest len < size - 1
	{
		dest[des_len + copy_len] = src[copy_len];
		copy_len++;
	}
	dest[des_len + copy_len] = '\0';
	return (des_len + src_len);
}

/*#include <stdio.h>

int main(void)
{
	char dest[60] = "This function is gonna ,";
	char src[] = "pass? Who knows :)";
	unsigned int Result = ft_strlcat(dest, src, sizeof(dest));

	printf("The lenght is:%u\n",Result);
	printf("Teh result is : %s\n", dest);
	return (0);
}*/