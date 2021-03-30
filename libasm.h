/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 10:18:39 by wluong            #+#    #+#             */
/*   Updated: 2021/03/30 20:53:47 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #ifndef	LIBASM_H
 # define	LIBASM_H

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>
# include <unistd.h>

size_t		ft_strlen(const char *);
size_t		ft_strcmp(const char *s1, const char *s2);
char		*ft_strcpy(char *dst, char *src);
ssize_t		ft_write(int fd, const void *buf, size_t count);
ssize_t 	ft_read(int fd, void *buf, size_t count);

 #endif