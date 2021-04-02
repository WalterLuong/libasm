/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 10:18:39 by wluong            #+#    #+#             */
/*   Updated: 2021/04/02 17:59:11 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #ifndef	LIBASM_H
 # define	LIBASM_H

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>
# include <unistd.h>
# include <errno.h>

# define NORMAL  "\033[0;m"
# define RED  "\033[0;31m"
# define GREEN  "\033[0;32m"
# define YELLOW  "\033[0;6;33m"
# define BLUE  "\033[0;34m"
# define MAGENTA  "\033[0;35m"
# define CYAN  "\033[0;36m"
# define WHITE  "\033[0;37m"
# define SRED  "\033[4;31m"
# define SGREEN  "\033[4;32m"
# define SYELLOW  "\033[4;33m"
# define SBLUE  "\033[4;34m"
# define SMAGENTA  "\033[4;35m"
# define SCYAN  "\033[4;36m"
# define SWHITE  "\033[4;37m"
# define GRED  "\033[1;31m"
# define GGREEN  "\033[1;32m"
# define GYELLOW  "\033[1;33m"
# define GBLUE  "\033[1;34m"
# define GMAGENTA  "\033[1;35m"
# define GCYAN  "\033[1;36m"
# define GWHITE  "\033[1;37m"

size_t		ft_strlen(const char *);
size_t		ft_strcmp(const char *s1, const char *s2);
char		*ft_strcpy(char *dst, char *src);
ssize_t		ft_write(int fd, const void *buf, size_t count);
ssize_t 	ft_read(int fd, void *buf, size_t count);
char        *ft_strdup(char *s);


 #endif