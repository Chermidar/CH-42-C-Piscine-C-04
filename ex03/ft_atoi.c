/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:05:40 by chermida          #+#    #+#             */
/*   Updated: 2022/05/30 12:05:42 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	c;
	int	s;
	int	nb;

	nb = 0;
	c = 0;
	s = 1;
	while ((str[c] >= 9
			&& str[c] <= 13) || str[c] == 32)
		c++;
	while (str[c] != 0 && (str[c] == 43
			|| str[c] == 45))
	{
		if (str[c] == 45)
			s *= -1;
		c++;
	}
	while (str[c] >= 48 && str[c] <= 57)
	{
		nb = (str[c] - 48) + (nb * 10);
		c++;
	}
	return (nb * s);
}

/*
int main()
{
	char str[]="     -++-+++-++1453hjhj1234";
	int nb=ft_atoi(str);
	printf("And the winner is...: %d\n",nb);
}
*/