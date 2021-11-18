/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:52:13 by abernita          #+#    #+#             */
/*   Updated: 2021/10/29 17:52:16 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//        Assignment name  : inter
//        Expected files   : inter.c
//        Allowed functions: write
//--------------------------------------------------------------------------------
//Напишите программу, которая принимает две строки и отображает без двойных
//        символов символы, которые появляются в обеих строках, в порядке, в котором
//        они появляются в первой.
//За ним последует новая строка.
//Если количество аргументов не равно 2, программа отображает новую строку.
//Примеры:
//$>./inter "padinton" "aqefwptdjetyiytjneytjoeyjnejeyj" | cat -e
//        padinto$
//$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
//        df6ewg4$
//$>./inter "rien" "cette phrase ne cache rien" | cat -e
//        rien$
//$>./inter | cat -e
//        $


#include <unistd.h>

int check(char *str, char c, int i)
{
	int n;

	n = -1;
	while(++n < i)
		if (str[n] == c)
			return (1);
	return (0);
}

void inter(char *str1, char *str2)
{
	int i;
	int j;

	i = -1;
	while (str1[++i])
	{
		if (!check(str1, str1[i], i))
		{
			j = -1;
			while (str2[++j])
			{
				if(str1[i] == str2[j])
				{
					write(1, &str1[i], 1);
					break;
				}
			}
		}
	}
}


//int main(int ac, char *av)
//{
//	if (ac == 3)
//	{
//
//	}
//	write(1, '\n', 1);
//}
int        main()
{
	char *av1 = "padinton";
	char *av2 = "aqefpwtdjetyiytjneytjoeyjnejeyj";
	inter(av1, av2);
	write(1, "\n", 1);
	return (0);
}