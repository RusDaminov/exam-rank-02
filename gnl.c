#include "gnl.h"

int gnl(char **line)
{
	char	*buf;
	char	ch;
	int		res;
	int		i;
	static char	*rm;
	ch = '\0';
	i = 0;
	buf = malloc(100000);
	*line = buf;
	buf[100000] = '\0';
	while ((res = read(0, &ch, 1)) > 0 && ch != ' ')
	{
		buf[i++] = ch;
	}

	buf[i] = '\0';
	return (res);
}