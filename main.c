/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 10:17:17 by wluong            #+#    #+#             */
/*   Updated: 2021/04/03 00:56:25 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

#define COLOR  "\e[1;34m"	

void	test_ft_strlen(void)
{
	char 	*s1;
	char 	*s2;
	char 	*s3;
	char 	*s4;
	char 	s5[1000];
	char	*s6;
	int		me;
	int		true;

	printf("%s%s%s%s\n\n", SCYAN, GCYAN, "Test de strlen", NORMAL);
	s1 = "";
	s2 = "test";
	s3 = "Ceci est une chaine de caracteres tres longue mais je sais pas si c'est assez long ou pas";
	s4 = "f5df65415DGsGSDG+-+*jlg78j64hgk4hg";
	s6 = "Saut de ligne \n";
	me = ft_strlen(s1);
	true = strlen(s1);
	printf("%sstr = %s%s\n", GBLUE, "\"\"", NORMAL);
	printf ("my len : %d\n", me);
	printf ("real len : %d\n", true);
	if (me == true)
		printf("%s%s%s\n\n", GGREEN, "[OK]", NORMAL);
	else
		printf("%s%s%s%s\n\n", GRED, CRED, "[FALSE]", NORMAL);
	me = ft_strlen(s2);
	true = strlen(s2);
		printf("%sstr = %s%s\n", GBLUE, s2, NORMAL);
	printf ("my len : %d\n", me);
	printf ("real len : %d\n", true);
	if (me == true)
		printf("%s%s%s\n\n", GGREEN, "[OK]", NORMAL);
	else
		printf("%s%s%s%s\n\n", GRED, CRED, "[FALSE]", NORMAL);
	me = ft_strlen(s3);
	true = strlen(s3);
	printf("%sstr = %s%s\n", GBLUE, s3, NORMAL);
	printf ("my len : %d\n", me);
	printf ("real len : %d\n", true);
	if (me == true)
		printf("%s%s%s\n\n", GGREEN, "[OK]", NORMAL);
	else
		printf("%s%s%s%s\n\n", GRED, CRED, "[FALSE]", NORMAL);
	me = ft_strlen(s4);
	true = strlen(s4);
		printf("%sstr = %s%s\n", GBLUE, s4, NORMAL);
	printf ("my len : %d\n", me);
	printf ("real len : %d\n", true);
	if (me == true)
		printf("%s%s%s\n\n", GGREEN, "[OK]", NORMAL);
	else
		printf("%s%s%s%s\n\n", GRED, CRED, "[FALSE]", NORMAL);
	me = ft_strlen(s6);
	true = strlen(s6);
		printf("%sstr = %s%s\n", GBLUE, s6, NORMAL);
	printf ("my len : %d\n", me);
	printf ("real len : %d\n", true);
	if (me == true)
		printf("%s%s%s\n\n", GGREEN, "[OK]", NORMAL);
	else
		printf("%s%s%s%s\n\n", GRED, CRED, "[FALSE]", NORMAL);
	printf("%s%sEcrivez votre propre chaine de caracteres :%s\n", GMAGENTA, SMAGENTA, NORMAL);
	fgets(s5, 1000, stdin);
	printf("%s\n", "");
	me = ft_strlen(s5) - 1;
	true = strlen(s5) - 1;
	printf("%sstr = %s%s", GBLUE, s5, NORMAL);
	printf ("my len : %d\n", me);
	printf ("real len : %d\n", true);
	if (me == true)
		printf("%s%s%s\n\n", GGREEN, "[OK]", NORMAL);
	else
		printf("%s%s%s%s\n\n", GRED, CRED, "[FALSE]", NORMAL);
}

void	test_ft_strcmp(void)
{
	printf("%s%s%s%s\n\n", SCYAN, GCYAN, "Test de strcmp", NORMAL);
	char	*s1;
	char	*s2;
	char	s3[1000];
	char	s4[1000];
	int		me;
	int		true;

	s1 = "test";
	s2 = "test";
	me = ft_strcmp(s1, s2);
	true = strcmp(s1, s2);
	printf("%sstr 1 = %s%s\n", GBLUE, s1, NORMAL);
	printf("%sstr 2 = %s%s\n", GBLUE, s2, NORMAL);
	printf ("my comp : %d\n", me);
	printf ("real comp : %d\n", true);
	if (me == true)
		printf("%s%s%s\n\n", GGREEN, "[OK]", NORMAL);
	else
		printf("%s%s%s%s\n\n", GRED, CRED, "[FALSE]", NORMAL);
	s1 = "bonjour";
	s2 = "au revoir";
	me = ft_strcmp(s1, s2);
	true = strcmp(s1, s2);
	printf("%sstr 1 = %s%s\n", GBLUE, s1, NORMAL);
	printf("%sstr 2 = %s%s\n", GBLUE, s2, NORMAL);
	printf ("my comp : %d\n", me);
	printf ("real comp : %d\n", true);
	if (me == true)
		printf("%s%s%s\n\n", GGREEN, "[OK]", NORMAL);
	else
		printf("%s%s%s%s\n\n", GRED, CRED, "[FALSE]", NORMAL);
	s1 = "jn,sfjql";
	s2 = "jn,disj";
	me = ft_strcmp(s1, s2);
	true = strcmp(s1, s2);
	printf("%sstr 1 = %s%s\n", GBLUE, s1, NORMAL);
	printf("%sstr 2 = %s%s\n", GBLUE, s2, NORMAL);
	printf ("my comp : %d\n", me);
	printf ("real comp : %d\n", true);
	if (me == true)
		printf("%s%s%s\n\n", GGREEN, "[OK]", NORMAL);
	else
		printf("%s%s%s%s\n\n", GRED, CRED, "[FALSE]", NORMAL);
	s1 = "";
	s2 = "";
	me = ft_strcmp(s1, s2);
	true = strcmp(s1, s2);
	printf("%sstr 1 = %s%s\n", GBLUE, "\"\"", NORMAL);
	printf("%sstr 2 = %s%s\n", GBLUE, "\"\"", NORMAL);
	printf ("my comp : %d\n", me);
	printf ("real comp : %d\n", true);
	if (me == true)
		printf("%s%s%s\n\n", GGREEN, "[OK]", NORMAL);
	else
		printf("%s%s%s%s\n\n", GRED, CRED, "[FALSE]", NORMAL);
	printf("%s%sEcrivez une premiere chaine de caractere :%s\n", SMAGENTA, GMAGENTA, NORMAL);
	fgets(s3, 1000, stdin);
	printf("\n");
	printf("%s%sEcrivez une seconde chaine de caractere :%s\n", SMAGENTA, GMAGENTA, NORMAL);
	fgets(s4, 1000, stdin);
	printf("\n");
	me = ft_strcmp(s3, s4);
	true = strcmp(s3, s4);
	printf("%sstr 1 = %s%s", GBLUE, s3, NORMAL);
	printf("%sstr 2 = %s%s", GBLUE, s4, NORMAL);
	printf ("my comp : %d\n", me);
	printf ("real comp : %d\n", true);
	if (me == true)
		printf("%s%s%s\n\n", GGREEN, "[OK]", NORMAL);
	else
		printf("%s%s%s%s\n\n", GRED, CRED, "[FALSE]", NORMAL);

}

void	test_strcpy(void)
{
	printf("%s%s%s%s\n\n", SCYAN, GCYAN, "Test de strcpy", NORMAL);
	char dest[1000] = {0};
	char dest2[1000] = {0};
	char src[] = "petite str";
	printf("%ssrc = %s%s\n", GBLUE, src, NORMAL);
	printf("dest after my strcpy :\n  %s\"%s\"%s\n", IWHITE, ft_strcpy(dest, src), NORMAL);
	printf("dest after the real strcpy :\n  %s\"%s\"%s\n", IWHITE, strcpy(dest2, src), NORMAL);
	if (!strcmp(dest, src))
		printf("%s%s%s\n\n", GGREEN, "[OK]", NORMAL);
	else
		printf("%s%s%s%s\n\n", GRED, CRED, "[FALSE]", NORMAL);
	char dest3[1000] = {0};
	char dest4[1000] = {0};
	char src2[] = "une str un peu plus grande qu'avant mais pas trop";
	printf("%ssrc = %s%s\n", GBLUE, src2, NORMAL);
	printf("dest after my strcpy :\n  %s\"%s\"%s\n", IWHITE, ft_strcpy(dest3, src2), NORMAL);
	printf("dest after the real strcpy :\n  %s\"%s\"%s\n", IWHITE, strcpy(dest4, src2), NORMAL);
	if (!strcmp(dest3, src2))
		printf("%s%s%s\n\n", GGREEN, "[OK]", NORMAL);
	else
		printf("%s%s%s%s\n\n", GRED, CRED, "[FALSE]", NORMAL);
	char dest5[1000] = {0};
	char dest6[1000] = {0};
	char src3[] = "Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Aenean commodo ligula eget dolor. Aenean massa. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Donec quam felis, ultricies nec, pellentesque eu, pretium quis, sem. Nulla consequat massa quis enim. Donec pede justo, fringilla vel, aliquet nec, vulputate eget, arcu. In enim justo, rhoncus ut, imperdiet a, venenatis vitae, justo. Nullam dictum felis eu pede mollis pretium. Integer tincidunt. Cras dapibus. Vivamus elementum semper nisi. Aenean vulputate eleifend tellus. Aenean leo ligula, porttitor eu, consequat vitae, eleifend ac, enim. Aliquam lorem ante, dapibus in, viverra quis, feugiat a, tellus. Phasellus viverra nulla ut metus varius laoreet. Quisque rutrum. Aenean imperdiet. Etiam ultricies nisi vel augue. Curabitur ullamcorper ultricies nisi. Nam eget dui. Etiam rhoncus. Maecenas tempus, tellus eget condimentum rhoncus, sem quam semper libero, sit amet adipiscing sem neque sed ipsum..";
	printf("%ssrc = %s%s\n", GBLUE, src3, NORMAL);
	printf("dest after my strcpy :\n  %s\"%s\"%s\n", IWHITE, ft_strcpy(dest5, src3), NORMAL);
	printf("dest after the real strcpy :\n  %s\"%s\"%s\n", IWHITE, strcpy(dest6, src3), NORMAL);
	if (!strcmp(dest5, src3))
		printf("%s%s%s\n\n", GGREEN, "[OK]", NORMAL);
	else
		printf("%s%s%s%s\n\n", GRED, CRED, "[FALSE]", NORMAL);
	char dest7[1000] = {0};
	char dest8[1000] = {0};
	char src4[1000];
	printf("%s%sEcrivez la chaine de caractere a copier :%s\n", SMAGENTA, GMAGENTA, NORMAL);
	fgets(src4, 1000, stdin);
	printf("%s\n", "");
	printf("%ssrc = %s%s\n", GBLUE, src4, NORMAL);
	printf("dest after my strcpy :\n  %s\"%s\"%s\n", IWHITE, ft_strcpy(dest7, src4), NORMAL);
	printf("dest after the real strcpy :\n  %s\"%s\"%s\n", IWHITE, strcpy(dest8, src4), NORMAL);
	if (!strcmp(dest7, src4))
		printf("%s%s%s\n\n", GGREEN, "[OK]", NORMAL);
	else
		printf("%s%s%s%s\n\n", GRED, CRED, "[FALSE]", NORMAL);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("\n");
		if (!strcmp(av[1], "ft_strlen"))
			test_ft_strlen();
		else if (!strcmp(av[1], "ft_strcmp"))
			test_ft_strcmp();
		else if (!strcmp(av[1], "ft_strcpy"))
			test_strcpy();
		else
		printf("%s%sError%s : le deuxieme argument doit etre le nom d'une fonction existante\n", GRED, CRED, NORMAL);
	}
	else if (ac == 1)
	{
		printf("%s%s\n                        \n       - %s -       %s\n\n", GYELLOW, SYELLOW, "LIBASM", NORMAL);
		test_ft_strlen();
		test_ft_strcmp();
		test_strcpy();
	}
	else
		printf("%s%sError%s : Trop d'arguments.\n", GRED, CRED, NORMAL);
	return (0);
}