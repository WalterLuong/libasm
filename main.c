/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 10:17:17 by wluong            #+#    #+#             */
/*   Updated: 2021/03/30 12:00:05 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

size_t		ft_strlen(const char *str);
size_t		ft_strcmp(const char *s1, const char *s2);
char		*ft_strcpy(char *dst, char *src);	

int		main(int ac, char **av)
{
	char *s1, *s2;
	if (ac != 3)
		printf("ERROR, missing argument\n");
	else
	{
		s1 = av[1];
		s2 = av[2];
		printf("asm : %ld\n", ft_strcmp(s1, s2));
		printf("true : %d\n", strcmp(s1, s2));
		puts(s1);
		puts(s2);
	}
	
	return (0);
}