/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:51:23 by nalfonso          #+#    #+#             */
/*   Updated: 2025/03/08 17:05:08 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		else
			i++;
	}
	return (1);
}

/*#include <stdio.h>
int main(void)
{
	char str1[] = "HelloWorabcdefghijklld";
	char str2[] = "";
	char str3[] = "Hello";
	char str4[] = "556";
	int result1 = ft_str_is_numeric(str1);
	int result2 = ft_str_is_numeric(str2);
	int result3 = ft_str_is_numeric(str3);
	int result4 = ft_str_is_numeric(str4);
	printf("%d\n",result1);
	printf("%d\n",result2);
	printf("%d\n",result3);
	printf("%d\n",result4);
}*/
