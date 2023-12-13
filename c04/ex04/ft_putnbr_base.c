/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliberat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:01:18 by sliberat          #+#    #+#             */
/*   Updated: 2023/12/13 22:20:22 by sliberat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int radix_check(char *base);

//void special_cases(int nb, char *base);

void ft_putnbr_base(int nbr, char *base)
{
    int base_len = radix_check(base);
    //special_cases(nbr, base);
	long int nbr_long = nbr;

	if (nbr_long < 0)
	{
		write(1, "-", 1);
		nbr_long = -nbr_long;
	}
	//if (nbr_long == -2147483648)
	//{
		//write(1, &base[1], 1);
		//nbr = 147483648;
	//}
	if (nbr == 0)
		write(1, &base[0], 1);
	
    
    int     i;
    int	    numero[40];

    i = 0;
    while (nbr_long > 0 && base_len > 0)
    {
        numero[i] = (nbr_long % base_len);
        nbr_long /= base_len;
        i++;
    }
    while (i > 0)
    {
        i--;
        write(1, &base[numero[i]], 1);
    }
}

int radix_check(char *base)
{
    int i;
    int j;
    
    i = 0;
// base has to have more than 1 character
    if (base[0] == '\0' || base[1] == '\0')
    {
        return 0;
    }
// base characters must be all different, and shall not be + or -
    while (base[i])
    {
        j = 0;
        while (base[j])
        {
            if (base[i] == base[j] && i != j)
                return 0;
            if (base[j] == '+'|| base[j] == '-')
                return 0;
            else
                j++;
        }
        i++;
    }
// base is good, we return the lenght back to the function
    return (i);
}


/*
void    special_cases(int nb, char *base)
{
    if (nbr == -2147483648)
    {

    }
    else if (nb == 0)
    {

    }
    else if (nb < 0)
    {
        write(1, "-", 1);
        nbr = -nbr;
        ft_putnbr_base(nbr);
    }
} 
*/
