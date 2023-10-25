/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 08:36:38 by eburnet           #+#    #+#             */
/*   Updated: 2023/07/05 17:21:12 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	h;
	int	i;

	h = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[h + i] = src[i];
		i++;
	}
	dest[h + i] = '\0';
	return (dest);
}
