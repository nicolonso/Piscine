/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 00:33:42 by nalfonso          #+#    #+#             */
/*   Updated: 2025/03/18 21:02:50 by nalfonso         ###   ########.fr       */
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

int	ft_strs_leng(int n, char **v1, char *v2)
{
	int	i;
	int	total_lenght;

	total_lenght = 0;
	i = 0;
	while (i < n)
	{
		total_lenght += ft_str_len(v1[i]);
		i++;
	}
	total_lenght += (n - 1) * ft_str_len(v2);
	return (total_lenght);
}

char	*ft_strcat(char *dest, char *src)
{
	int	des_len;
	int	index;

	des_len = 0;
	if (dest[des_len] != '\0')
	{
		while (dest[des_len])
			des_len++;
	}
	index = 0;
	while (src[index])
	{
		dest[des_len + index] = src[index];
		index++;
	}
	dest[des_len + index] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*ptr;

	if (size == 0)
	{
		ptr = (char *)malloc(1);
		if (ptr == NULL)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	ptr = (char *)malloc(sizeof(char) * ft_strs_leng(size, strs, sep) + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(ptr, strs[i]);
		if (i < size - 1)
			ft_strcat(ptr, sep);
		i++;
	}
	return (ptr);
}

int main()
{
    char *strs[] = {"This", "gonna", "pass", "who", "knows"};
    char *sep = ", ";//n(size - 1)
    char *result = ft_strjoin(5, strs, sep);

    if (result)
    {
        printf("Result: %s\n", result);
        free(result);
    }
    else
        printf("Memory allocation failed.\n");
    return (0);
}
