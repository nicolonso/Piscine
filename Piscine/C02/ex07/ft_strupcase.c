/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 19:56:56 by nalfonso          #+#    #+#             */
/*   Updated: 2025/03/06 21:27:48 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int main()
{
	char str1[] = "Hello World";
	char str2[] = "h1z1";
	char str3[] = "hello";
	ft_strupcase(str1);
	ft_strupcase(str2);
	ft_strupcase(str3);
	printf("%s\n",str1);
	printf("%s\n",str2);
	printf("%s\n",str3);
}*/
