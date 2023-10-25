/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:53:24 by eburnet           #+#    #+#             */
/*   Updated: 2023/07/09 14:16:30 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	rslt;

	rslt = nb;
	if (nb > 0)
	{
		nb -= 1;
		rslt = rslt * ft_recursive_factorial(nb);
		nb--;
		return (rslt);
	}
	else if (nb == 0)
		return (1);
	return (0);
}
