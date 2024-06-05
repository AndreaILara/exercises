/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainigo-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:17:08 by ainigo-l          #+#    #+#             */
/*   Updated: 2024/06/03 08:17:10 by ainigo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	char			c;
	int				new;

	i = 0;
	new = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (new == 1 && c >= 'a' && c <= 'z')
			str[i] = str[i] - 32;
		else if (new == 0 && c >= 'A' && c <= 'Z')
			str[i] = str[i] + 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
			new = 1;
		else
			new = 0;
		i++;
	}
	return (str);
}

int	main(void)
{
	

	char str[] = "salut, comMent tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	write(1, str, 62);
	return (0);
}
