/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliberat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:54:19 by sliberat          #+#    #+#             */
/*   Updated: 2023/12/04 20:08:03 by sliberat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	special_cases(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		ft_putnbr(nb);
	}
}

void	ft_putnbr(int nb)
{
	int		i;
	char	numero[12];

	special_cases(nb);
	i = 0;
	while (nb > 0)
	{
		numero[i] = '0' + (nb % 10);
		nb /= 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		write(1, &numero[i], 1);
	}
}
