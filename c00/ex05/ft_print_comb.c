/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 16:17:49 by eburnet           #+#    #+#             */
/*   Updated: 2023/07/03 10:38:55 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_numbers(char nb1, char nb2, char nb3)
{
	write(1, &nb1, 1);
	write(1, &nb2, 1);
	write(1, &nb3, 1);
	if (!(nb1 == '7' && nb2 == '8' && nb3 == '9'))
		write(1, ", ", 2);
}	

void	ft_print_comb(void)
{
	char	nb1;
	char	nb2;
	char	nb3;

	nb1 = '0';
	nb2 = '1';
	nb3 = '2';
	while (nb1 <= '7')
	{
		while (nb2 <= '8')
		{
			while (nb3 <= '9')
			{
				ft_write_numbers(nb1, nb2, nb3);
				nb3++;
			}
			nb2++;
			nb3 = nb2 + 1;
		}
		nb2 = nb1 + 1;
		nb1++;
	}
}
