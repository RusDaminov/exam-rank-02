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

int ft_check(char c, char *str, int k)
{
	int i;

	i = -1;
	while (++i < k)
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
		if (ft_check(str1[i], str1, i))
			write(1, &str1[i], 1);
	while (str2[++j])
		if (ft_check(str2[j], str1, i) && ft_check(str2[j], str2, j))
			write(1, &str2[j], 1);
}

int main(int argc, char **argv) {
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
