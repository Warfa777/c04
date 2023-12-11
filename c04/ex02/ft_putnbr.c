/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliberat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 01:17:05 by sliberat          #+#    #+#             */
/*   Updated: 2023/12/11 01:58:59 by sliberat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	char_value[20] = '0' + nb;
	int		i;

	i = 0;
	while(char_value[i] != '\0')
	{
		write(1, &char_value[i], 1);
		i++;
	}
}
