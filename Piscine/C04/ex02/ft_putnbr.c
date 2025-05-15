/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 22:33:20 by nalfonso          #+#    #+#             */
/*   Updated: 2025/03/15 22:20:31 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_nbr(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_write_nbr('-');
		ft_write_nbr('2');
		nb = 147483648;
	}
	else if (nb < 0)
	{
		ft_write_nbr('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_write_nbr(nb + '0');
	}
}

/*int main(void)
{
    ft_putnbr(42);
    write(1, "\n", 1);  
    ft_putnbr(-12);
    write(1, "\n", 1);
    ft_putnbr(5454545);
    write(1, "\n", 1);
    ft_putnbr(454);
    write(1, "\n", 1);
    ft_putnbr(0);
    write(1, "\n", 1);
    ft_putnbr(328214);
    write(1, "\n", 1);
    return 0;
}*/
