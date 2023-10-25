/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:51:17 by eburnet           #+#    #+#             */
/*   Updated: 2023/07/17 13:59:31 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	int	i;
	int	j;
	int	h;
	int	lencharset;
	char	**rslt;

	i = 0;
	j = 0;
	h = 0;
	rslt = malloc((ft_strlen(str) - ft_strlen(charset)) * sizeof(char));
	while (str[i] != '\0')
	{
		if (str[i] != charset[h])
			rslt[j][i] = str[i];
			i++;
		while (str[i] == charset[h] && h <= ft_strlen(charset))
		{
			h++;
			i++;
		}
		if (h == ft_strlen(charset))
			j++;
	}
	return (rslt);
}

int	main(void)
{
	char	**split;
	int	i;

	i = 0;
	split = ft_split("Salut les gars", " ");
	while (split[i] != '\0')
	{
		pritnf("%s", split[i]);
	}
}
