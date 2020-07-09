/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budayima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 17:45:38 by budayima          #+#    #+#             */
/*   Updated: 2020/07/09 17:45:43 by budayima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_print_comb2()
{
	char a;
	char b;

	a='0';
	b='0';

	while (a<='9')
	{
		while (b<='9')
		{
			if (a < b)
				{
					ft_putchar(a);
					ft_putchar(b);
					if (a=='7' &&b=='8')
					{
						break;
					}
					ft_putchar(',');
					ft_putchar(' ');
				}
				b++;
		}
		a = '0';
		a++;
	}
	ft_putchar('\n');
}

int main()
{
	ft_print_comb2();
	return(0);
}
