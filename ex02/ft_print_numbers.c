/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budayima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:38:33 by budayima          #+#    #+#             */
/*   Updated: 2020/07/09 14:50:53 by budayima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_print_number()
{
	char number;
	number ='0';
	while (number <='9')
	{
		ft_putchar(number);
		number++;
	}
	ft_putchar('\n');
}
