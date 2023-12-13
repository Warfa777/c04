/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliberat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 23:28:11 by sliberat          #+#    #+#             */
/*   Updated: 2023/12/13 17:33:32 by sliberat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		i;
	int		sign_count;
	int		store_nb;

	i = 0;
	sign_count = 0;
	store_nb = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign_count++;
		}
		else if ('0' <= str[i] && str[i] <= '9')
			store_nb = store_nb * 10 + (str[i] - '0');
		else
			break ;
		i++;
	}
	if (sign_count % 2 == 1)
		store_nb = -store_nb;
	return (store_nb);
}
