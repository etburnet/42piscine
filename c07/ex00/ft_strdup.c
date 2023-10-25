/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:49:34 by eburnet           #+#    #+#             */
/*   Updated: 2023/07/13 11:48:48 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int	i;

	i = 0;
	dest = malloc(ft_strlen(src) * sizeof(char));
	if (!dest)
		return(NULL);
	while (src [i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}


/*int main()
{
	char s[] = "test";
	printf("%s", ft_strdup(s));
}*/
