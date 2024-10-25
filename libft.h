#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdio.h>

int		ft_atoi(char *str);
int		ft_isalnum(char c);
int		ft_isalpha(char c);
int		ft_isascii(char c);
int		ft_isdigit(char c);
int		ft_isprint(char c);
void	bzero(void *s, size_t n);
void 	*memcpy(void *dest, const void *src, size_t n);
void 	*ft_memmove(void *dest, const void *src, size_t n);
void	*memset(void *s, int c, size_t n);
size_t	strlcat(char *dst, const char *src, size_t size);
size_t 	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);


#endif