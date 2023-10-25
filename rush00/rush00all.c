/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 10:06:43 by eburnet           #+#    #+#             */
/*   Updated: 2023/07/02 16:36:19 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int xmax, int ymax, int l,int c)
{
	if ((c == 0 && l == 0) || (c == ymax - 1 && l == xmax - 1) || (c == 0 && l == xmax - 1) || (c == ymax - 1 && l == 0))
	{
		write(1, "o", 1);
	}
	else if (l < xmax - 1 && (c == 0 || c == ymax - 1))
	{
		write(1, "-", 1);
	}
	else if (l == 0 || l == xmax - 1 )
	{
		write(1, "|", 1);
	}
	else
	{
		write(1, " ", 1);
	}
}

void	rush00(int x, int y)
{
	int	c;
	int	l;

	c = 0;
	l = 0;
	if (x > 0 && y > 0)
	{
		while (c < y) 
		{
			while (l < x)
			{
				ft_putchar(x, y ,l, c);
				l++;
			}
			l = 0;
			c++;
			write(1, "\n", 1);
		}
	}
	else
	{
		write(1, "\n", 1);
		return;
	}
}

int main(void)
{
	rush00(21, 87);
	return (0);
}

