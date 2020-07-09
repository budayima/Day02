/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budayima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:05:30 by budayima          #+#    #+#             */
/*   Updated: 2020/07/09 14:16:09 by budayima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_print_reverse_alphabet()
{
	char letter;
	letter='z';
	while (letter >='a')
	{
		ft_putchar(letter);
		letter--;
	}
	ft_putchar('\n');
}
