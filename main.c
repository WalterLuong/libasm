/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 10:17:17 by wluong            #+#    #+#             */
/*   Updated: 2021/03/31 11:36:13 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

size_t		ft_strlen(const char *str);
size_t		ft_strcmp(const char *s1, const char *s2);
char		*ft_strcpy(char *dst, char *src);
ssize_t		ft_write(int fd, const void *buf, size_t count);
ssize_t 	ft_read(int fd, void *buf, size_t count);


int		main(int ac, char **av)
{
	int fd;
	int fd2;
	int ret;
	char str[4096 + 1];

	fd = open(av[1], O_RDWR);
	fd2 = open(av[1], O_RDONLY);
	if (ac != 2)
		printf("ERROR\n");
	else
	{
		ft_write(fd, "walter luong", 12);
		ret = ft_read(fd2, str, 12);
		str[ret] = '\0';
		printf("%s\n", str);
	}
	close(fd);
	close(fd2);
	return (0);
}