/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:59:48 by nalfonso          #+#    #+#             */
/*   Updated: 2025/03/05 23:23:49 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	j = 1;
	while (str[j] != '\0')
	{
		if ((str[j] >= 97 && str[j] <= 122) && (str[j - 1] <= 47
				|| (str[j - 1] >= 58 && str[j - 1] <= 64)
				|| (str[j - 1] >= 91 && str[j - 1] <= 96)
				|| str[j - 1] >= 123))
			str[j] -= 32;
		j++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "sAlut, coMMent tu vas ? 42Mots quarante-Deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str));
}
