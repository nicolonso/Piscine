/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 19:16:25 by nalfonso          #+#    #+#             */
/*   Updated: 2025/03/06 00:02:07 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		else
			i++;
	}
	return (1);
}

/*#include <stdio.h>
int main()
{
	char str1[] = "Hello";
	char str2[] = "";
	char str3[] = "\t";
	int result1 = ft_str_is_printable(str1);
	int result2 = ft_str_is_printable(str2);
	int result3 = ft_str_is_printable(str3);
	printf("%d\n",result1);
	printf("%d\n",result2);
	printf("%d\n",result3);
}*/
