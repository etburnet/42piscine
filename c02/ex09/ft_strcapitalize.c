/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:57:07 by eburnet           #+#    #+#             */
/*   Updated: 2023/07/08 14:16:05 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{			
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		if (!((str[i] >= '0' && str[i] <= '9')
				|| (str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'Z')
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}

/*int main()
{
	char	str[] = "  65 Sale ffef 42ee  EGEGeg 6rgg8r4gg rg-grgr ggrg";
	printf("%s\n", ft_strcapitalize(str));
}*/
