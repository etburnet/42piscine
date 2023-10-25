/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 09:52:20 by eburnet           #+#    #+#             */
/*   Updated: 2023/07/09 11:51:42 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	rslt;

	rslt = nb;
	if (nb > 0)
	{
		nb -= 1;
		while (nb > 0)
		{
			rslt = rslt * nb;
			nb--;
		}
		return (rslt);
	}
	else if (nb == 0)
		return (1);
	return (0);
}
