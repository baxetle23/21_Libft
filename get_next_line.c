#include "libft.h"

void	ft_strcpy(char *dest, char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		dest[i] = set[i];
		i++;
	}
	ft_bzero(&dest[i], set - dest);
}

char	*check_reminder(char *reminder, char **line)
{
	char	*pointer_n;

	pointer_n = NULL;
	if (reminder)
	{
		pointer_n = ft_strchr(reminder, '\n');
		if (pointer_n)
		{
			*pointer_n = '\0';
			*line = ft_strdup(reminder);
			ft_strcpy(reminder, ++pointer_n);
		}
		else
		{
			*line = ft_strdup(reminder);
			ft_strclr(reminder);
		}
	}
	else
		*line = ft_strnew(1);
	return (pointer_n);
}

int	get_next_line(int fd, char **line)
{
	char			buffer[BUFF_SIZE + 1];
	char			*pointer_n;
	char			*tmp;
	int				last_byte;
	static char		*reminder;

	pointer_n = check_reminder(reminder, line);
	last_byte = read(fd, buffer, BUFF_SIZE);
	while (!pointer_n && last_byte)
	{	
		buffer[last_byte] = '\0';
		pointer_n = ft_strchr(buffer, '\n');
		if (pointer_n)
		{
			*pointer_n = '\0';
			reminder = ft_strdup(++pointer_n);
		}
		tmp = *line;
		*line = ft_strjoin(*line, buffer);
		free(tmp);
	}
	if (pointer_n || ft_strlen(*line) || ft_strlen(reminder))
		return (1);
	return (0);
}
