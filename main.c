/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 10:17:17 by wluong            #+#    #+#             */
/*   Updated: 2021/04/02 00:34:49 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

size_t		ft_strlen(const char *str);
size_t		ft_strcmp(const char *s1, const char *s2);
char		*ft_strcpy(char *dst, char *src);
ssize_t		ft_write(int fd, const void *buf, size_t count);
ssize_t 	ft_read(int fd, void *buf, size_t count);


int		main(void)
{
	char s1[] = "test";
	char t1[] = "test";
	char s2[] = "Bonjour";
	char t2[] = "Bonjour";
	char s3[] = "Autre test";
	char t3[] = "Autre test";
	char s4[] = "oui";
	char t4[] = "oui";

	printf("me : %s\n", ft_strcpy(s4, s2));
	printf("true : %s\n", strcpy(t4, t2));
	printf("me : %s\n", ft_strcpy(s1, s3));
	printf("true : %s\n", strcpy(t1, t3));
	
	return (0);
}