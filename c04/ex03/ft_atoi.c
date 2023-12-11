/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliberat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 23:28:11 by sliberat          #+#    #+#             */
/*   Updated: 2023/12/11 00:49:05 by sliberat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		i;
	int		j;
	int		sign_count;
	int		store_nb;

	i = 0;
	j = 0;
	sign_count = 0;
	store_nb = 0;
	while (str[i] != '\0' && j == 0)
	{
		if (str[i] == '-' && j == 0)
			sign_count++;
		while ('0' <= str[i] && str[i] <= '9' && j == 0)
		{
			store_nb = store_nb * 10 + (str[i] - '0');
			i++;
			if (str[i] < '0' && str[i] > '9')
				j++;
		}
		i++;
	}
	if (sign_count % 2 == 1)
		store_nb = -store_nb;
	return (store_nb);
}
