/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 19:06:17 by nalfonso          #+#    #+#             */
/*   Updated: 2025/03/06 20:57:32 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>
int main()
{
	char str1[] = "Hello World";
	char str2[] = "";
	char str3[] = "HELLO";
	char str4[] = "556";
	int result1 = ft_str_is_uppercase(str1);
	int result2 = ft_str_is_uppercase(str2);
	int result3 = ft_str_is_uppercase(str3);
	int result4 = ft_str_is_uppercase(str4);
	printf("%d\n",result1);
	printf("%d\n",result2);
	printf("%d\n",result3);
	printf("%d\n",result4);
}*/
