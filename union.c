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

int check(char *s, char c, int i)
{
	int n = -1;
	while (++n < i)
		if (s[n] == c)
			return (0);
	return (1);
}

void ft_union(char *s1, char *s2)
{
	int i;
	int j;

	i = -1;
	while (s1[++i])
	{
		if (check(s1, s1[i], i))
			write(1, &s1[i], 1);
	}
	j = -1;
	while (s2[++j])
	{
		if (check(s1, s2[j], i) && check(s2, s2[j], j))
			write(1, &s2[j], 1);
	}
}

int main()
{
	char *av1 = "zpadinton";
	char *av2 = "aqefpwtdjetyiytjneytjoezyjneptjeyj";
	ft_union(av1, av2);
	write(1, "\n", 1);
	return (0);
}