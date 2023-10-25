/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:08:05 by eburnet           #+#    #+#             */
/*   Updated: 2023/07/13 17:09:29 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (!*range)
		return (0);
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min ++;
	}
	return (**range);
}

/*int	main()
{
	int	*range;
	int	i;

	ft_ultimate_range(&range, 5, 10);
	i = 0;
	while (i < 5)
	{
		printf("%d", range[i]);
		i++;
	}
}*/
