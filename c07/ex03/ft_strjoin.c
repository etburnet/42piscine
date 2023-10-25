/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:10:48 by eburnet           #+#    #+#             */
/*   Updated: 2023/10/05 10:55:33 by eburnet          ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	h;
	int	i;

	h = 0;
	i = 0;
	while (dest[h])
		h++;
	while (src[i])
	{
		dest[h + i] = src[i];
		i++;
	}
	dest[h + i] = '\0';
	return (dest);
}

int	ft_size(int size, char **strs, char *sep)
{
	int	j;
	int	len;

	j = 0;
	len = 0;
	while (j < size)
	{
		len += ft_strlen(strs[j]);
		j++;
	}
	len += (size - 1) * ft_strlen(sep);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		j;
	int		len;
	char	*rslt;

	j = 0;
	if (size == 0)
	{
		rslt = malloc(1 * sizeof(char));
		rslt = '\0';
		return (rslt);
	}
	len = ft_size(size, strs, sep);
	rslt = malloc((len + 1) * sizeof(char));
	rslt[0] = '\0';
	while (j < size)
	{
		ft_strcat(rslt, strs[j]);
		j++;
		if (j < size)
			ft_strcat(rslt, sep);
	}
	return (rslt);
}

/*int	main(void)
{
	char	*tabtab[5];

	tabtab[0] = "yo";
	tabtab[1] = "cv";
	tabtab[2] = "les";
	tabtab[3] = "gars";
	tabtab[4] = "?";
	printf("%s", ft_strjoin(4, tabtab, "  "));
	return (0);
}*/
