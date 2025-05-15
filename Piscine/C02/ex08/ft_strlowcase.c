/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 20:05:19 by nalfonso          #+#    #+#             */
/*   Updated: 2025/03/05 23:22:35 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int main()
{
	char str1[] = "Hello WORLD";
	char str2[] = "STRANGERS";
	char str3[] = "HELLO";
	ft_strlowcase(str1);
	ft_strlowcase(str2);
	ft_strlowcase(str3);
	printf("%s\n",str1);
	printf("%s\n",str2);
	printf("%s\n",str3);
}*/
