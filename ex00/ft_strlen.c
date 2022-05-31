/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:01:54 by chermida          #+#    #+#             */
/*   Updated: 2022/05/30 12:01:56 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (*str != 0)
	{
		str++;
		a++;
	}
	return (a);
}

/*
int main(void)
{
	char	cadena[] = "supercalifragilisticexpialidocious";
	ft_strlen(cadena);
	printf("La cadena tiene %i caracteres", ft_strlen(cadena));
	return (0);
}
*/