/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:29:23 by nalfonso          #+#    #+#             */
/*   Updated: 2025/03/08 22:01:58 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a')
				|| str[i] > 'z'))
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
	char str3[] = "H1llo";
	char str4[] = "hyufftfiutffggj";
	int result1 = ft_str_is_alpha(str1);
	int result2 = ft_str_is_alpha(str2);
	int result3 = ft_str_is_alpha(str3);
	int result4 = ft_str_is_alpha(str4);
	printf("%d\n",result1);
	printf("%d\n",result2);
	printf("%d\n",result3);
	printf("%d\n",result4);
}*/
