/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:38:26 by eburnet           #+#    #+#             */
/*   Updated: 2023/07/13 13:59:29 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{	
	int	i;
	int	*table;

	i = 0;
	if (min >= max)
		return (0);
	table = malloc((max - min) * sizeof(int));
	if (!table)
		return (0);
	while (min < max)
	{
		table[i] = min;
		i++;
		min ++;
	}
	return (table);
}

/*int	main()
{
	int	*tab;
	int	i;
	
	tab = ft_range(5,10);
	i = 0;
	while (i < 5)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
