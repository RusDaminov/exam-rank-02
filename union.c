/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:52:39 by abernita          #+#    #+#             */
/*   Updated: 2021/10/29 17:52:42 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************************************************************
Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------
Напишите программу, которая принимает две строки и отображает без двойных символов
символы, которые появляются только в одной из строк.
Отображение будет в том порядке, в котором символы появляются в командной строке,
и за ними последует новая строка.
Если количество аргументов не равно 2, программа отображает новую строку.
Пример:
$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
   ************************************************************************** */

#include <unistd.h>

int ft_check(char *str, char c, int i)
{
	int j;

	j = -1;
	while (++j < i)
		if (str[i] == c)
			return(0);
	return(1);
}

void ft_union(char *str1, char *str2)
{
	int i;
	int j;

	i = -1;
	j = -1;
	while (str1[++i])
		if (ft_check(str1, str1[i], i))
			write(1, &str1[i], 1);
	while (str2[++j])
		if (ft_check(str1, str2[j], i) && ft_check(str2, str2[j], j))
			write(1, &str2[j], 1);
}

int main(int ac, char **av) {
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}

#include <stdio.h>
//#include <unistd.h>
//
//int ft_strlen(char *s)
//{
//    int i = 0;
//    int len = 0;
//    while (s[i])
//    {
//        len++;
//        i++;
//    }
//    return (len);
//}
//
//int main(int argc, char **argv)
//{
//    int i = 0;
//    int k;
//
//    if (argc == 3)
//    {
//        while (argv[1][i])
//        {
//            int j = 0;
//            while (j < i)
//            {
//                if (argv[1][i] == argv[1][j])
//                    break;
//                j++;
//            }
//            if (i == j)
//                write(1, &argv[1][i], 1);
//            i++;
//        }
//        i = 0;
//        while (argv[2][i])
//        {
//            int j = 0;
//            while (j < ft_strlen(argv[1]))
//            {
//                if (argv[2][i] == argv[1][j])
//                    break;
//                j++;
//            }
//            k = 0;
//            while (k < i)
//            {
//                if (argv[2][i] == argv[2][k])
//                    break;
//                k++;
//            }
//            if (j == ft_strlen(argv[1]) && (k == i))
//                write(1, &argv[2][i], 1);
//            i++;
//        }
//    }
//    write(1, "\n", 1);
//    return (0);
//}
