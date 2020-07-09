/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budayima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 13:15:47 by budayima          #+#    #+#             */
/*   Updated: 2020/07/09 13:20:37 by budayima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_print_alphabet()
{
	char letter;
	letter ='a';
	while (letter <='z')
	{
		ft_putchar(letter);
		letter ++;
	}
	ft_putchar('\n');
}
