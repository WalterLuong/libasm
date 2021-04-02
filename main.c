/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 10:17:17 by wluong            #+#    #+#             */
/*   Updated: 2021/04/02 18:21:37 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

#define COLOR  "\e[1;34m"	

void	test_ft_strlen(void)
{
	char *s1;
	char *s2;
	char *s3;
	char *s4;
	int		me;
	int		true;

	s1 = "";
	s2 = "test";
	s3 = "Ceci est une chaine de caracteres tres longue mais je sais pas si c'est assez long ou pas";
	s4 = "f5df65415DGsGSDG+-+*jlg78j64hgk4hg";
	me = ft_strlen(s1);
	true = strlen(s1);
	printf ("me - len de la chaine vide : %d\n", me);
	printf ("true - len de la chaine vide : %d\n", true);
	if (me == true)
		printf("%s%s%s\n", GGREEN, "[OK]", NORMAL);
	else
		printf("%s%s%s\n", GRED, "[FALSE]", NORMAL);
	me = ft_strlen(s2);
	true = strlen(s2);
	printf ("me - len [test] : %d\n", me);
	printf ("true - len de [test] : %d\n", true);
	if (me == true)
		printf("%s%s%s\n", GGREEN, "[OK]", NORMAL);
	else
		printf("%s%s%s\n", GRED, "[FALSE]", NORMAL);
	me = ft_strlen(s3);
	true = strlen(s3);
	printf ("me - len de [Ceci est une chaine de caracteres tres longue mais je sais pas si c'est assez long ou pas] : %d\n", me);
	printf ("true - len [Ceci est une chaine de caracteres tres longue mais je sais pas si c'est assez long ou pas] : %d\n", true);
	if (me == true)
		printf("%s%s%s\n", GGREEN, "[OK]", NORMAL);
	else
		printf("%s%s%s\n", GRED, "[FALSE]", NORMAL);
	me = ft_strlen(s4);
	true = strlen(s4);
	printf ("me - len de [f5df65415DGsGSDG+-+*jlg78j64hgk4hg] : %d\n", me);
	printf ("true - len de [f5df65415DGsGSDG+-+*jlg78j64hgk4hg] : %d\n", true);
	if (me == true)
		printf("%s%s%s\n", GGREEN, "[OK]", NORMAL);
	else
		printf("%s%s%s\n", GRED, "[FALSE]", NORMAL);
}

int		main(int ac, char **av)
{
	printf("%s%s\n                        \n       - %s -       %s\n\n", GYELLOW, SYELLOW, "LIBASM", NORMAL);
	if (ac == 2)
	{
		if (!strcmp(av[1], "ft_strlen"))
		{
			test_ft_strlen();
		}
		else
		printf("ERROR, mauvaais test");
	}
	else
	{
		test_ft_strlen();
	}
	return (0);
}