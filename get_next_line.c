#include "get_next_line.h"
//
//int gnl(char **line)
//{
//	char	*buf;
//	char	ch;
//	int		res;
//	int		i;
//	static char	*rm;
//	ch = '\0';
//	i = 0;
//	buf = malloc(100000);
//	*line = buf;
//	buf[100000] = '\0';
//	while ((res = read(0, &ch, 1)) > 0 && ch != ' ')
//	{
//		buf[i++] = ch;
//	}
//
//	buf[i] = '\0';
//	return (res);
//}


int  get_next_line(char **line)
{
	int i;
	char buff;

	i = 0;
	if (line == NULL)
		return (-1);
	*line = malloc(sizeof(char) * 100);
	while (read(0, &buff, 1) > 0)
	{
		if (buff == '\n')
		{
			(*line)[i] = '\0';
			return (1);
		}
		(*line)[i] = buff;
		i++;
	}
	(*line)[i] = '\0';
	return (0);
}