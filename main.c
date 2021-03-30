/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 10:17:17 by wluong            #+#    #+#             */
/*   Updated: 2021/03/30 18:07:52 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

size_t		ft_strlen(const char *str);
size_t		ft_strcmp(const char *s1, const char *s2);
char		*ft_strcpy(char *dst, char *src);
ssize_t		ft_write(int fd, const void *buf, size_t count);


int		main(int ac, char **av)
{
//	int fd;

//	fd = open(av[1], O_RDWR);
	if (ac != 3)
		printf("ERROR\n");
	else
	{
		ft_write(1, av[1], atoi(av[2]));
	}
	return (0);
}