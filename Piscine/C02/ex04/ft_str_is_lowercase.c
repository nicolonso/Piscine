/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 19:01:12 by nalfonso          #+#    #+#             */
/*   Updated: 2025/03/07 20:40:02 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>
int main(void)
{
	char str1[] = "Hello World";
	char str2[] = "";
	char str3[] = "hello";
	char str4[] = "556";
	int result1 = ft_str_is_lowercase(str1);
	int result2 = ft_str_is_lowercase(str2);
	int result3 = ft_str_is_lowercase(str3);
	int result4 = ft_str_is_lowercase(str4);
	printf("%d\n",result1);
	printf("%d\n",result2);
	printf("%d\n",result3);
	printf("%d\n",result4);
}*/
