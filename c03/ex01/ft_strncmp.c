/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 08:44:26 by eburnet           #+#    #+#             */
/*   Updated: 2023/07/12 09:43:27 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (!n)
		return (0);
	while (s1[i] == s2[i] && i < n - 1
		&& (s2[i] != '\0' && s1[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}