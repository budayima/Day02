/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budayima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 16:28:17 by budayima          #+#    #+#             */
/*   Updated: 2020/07/09 17:32:51 by budayima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_print_comb()
{
	char a;
	char b;
	char c;

	a='0';
	b='0';
	c='0';

	while (a<='9')
	{
		while (b<='9')
		{
			while (c<='9')
			{
				if (a < b && b < c)
				{
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(c);
					if (a=='7' &&b=='8' &&c=='9')
					{
						break;
					}
					ft_putchar(',');
					ft_putchar(' ');
				}
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
	ft_putchar('\n');
}

