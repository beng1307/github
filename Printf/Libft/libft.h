/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgretic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:37:32 by bgretic           #+#    #+#             */
/*   Updated: 2024/05/08 12:29:51 by bgretic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>

int			ft_atoi(const char *nptr);

void		ft_bzero(void *s, size_t n);

void		*ft_calloc(size_t nmemb, size_t size);

int			ft_isalnum(int argument);

int			ft_isalpha(int argument);

int			ft_isascii(int c);

int			ft_isdigit(int arg);

int			ft_isprint(int c);

void		*ft_memchr(const void *s, int c, size_t n);

int			ft_memcmp(const void *s1, const void *s2, size_t n);

void		*ft_memcpy(void *dest, const void *src, size_t n);

void		*ft_memmove(void *dest, const void *src, size_t n);

void		*ft_memset(void *s, int c, size_t n);

char		*ft_strchr(const char *str, int c);

char		*ft_strdup(const char *s);

size_t		ft_strlcat(char *dest, const char *src, size_t size);

size_t		ft_strlcpy(char *dest, const char *src, size_t size);

size_t		ft_strlen(const char *str);

int			ft_strncmp(const char *str1, const char *str2, size_t num);

char		*ft_strnstr(const char *big, const char *little, size_t len);

char		*ft_strrchr(char *str, int c);

int			ft_tolower(int ch);

int			ft_toupper(int ch);

char		*ft_substr(char const *s, unsigned int start, size_t len);

char		*ft_strjoin(char const *s1, char const *s2);

char		*ft_strtrim(char const *s1, char const *set);

char		*ft_itoa(int n);

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void		ft_striteri(char *s, void (*f)(unsigned int, char*));

void		ft_putchar_fd(char c, int fd);

void		ft_putstr_fd(char *s, int fd);

void		ft_putendl_fd(char *s, int fd);

void		ft_putnbr_fd(int nb, int fd);

char		**ft_split(char const *s, char c);

#endif
