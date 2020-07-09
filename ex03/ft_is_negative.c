/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budayima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 15:10:05 by budayima          #+#    #+#             */
/*   Updated: 2020/07/09 15:23:10 by budayima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_is_negative(int n)
{
	if (n<0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}
