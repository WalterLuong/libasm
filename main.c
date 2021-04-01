/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 10:17:17 by wluong            #+#    #+#             */
/*   Updated: 2021/04/02 00:49:52 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

size_t		ft_strlen(const char *str);
size_t		ft_strcmp(const char *s1, const char *s2);
char		*ft_strcpy(char *dst, char *src);
ssize_t		ft_write(int fd, const void *buf, size_t count);
ssize_t 	ft_read(int fd, void *buf, size_t count);
char 		*ft_strdup(const char *s);



int		main(void)
{
	char s1[] = "test";
	char *s2;
	char s3[] = "test";
	char *s4;

	s2 = ft_strdup(s1);
	s4 = strdup(s3);

	printf("me : %s\n", s2);
	printf("me : %s\n", s4);
	
	return (0);
}