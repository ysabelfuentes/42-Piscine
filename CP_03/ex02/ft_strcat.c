/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 08:42:37 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/02 11:40:33 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	cad;

	cad = 0;
	while (str[cad] != '\0')
	{
		cad++;
	}
	return (cad);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	cont;

	i = 0;
	cont = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[cont] = src[i];
		i++;
		cont++;
	}
	dest[cont] = '\0';
	return (dest);
}
