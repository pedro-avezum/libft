#ifndef FT_LIBFT_H
#define FT_LIBFT_H
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
int atoi(const char *nptr);
void bzero(void *s, size_t n);
void *calloc(size_t nmemb, size_t size);
int	ft_isalnum(int check);
int	ft_isalpha(int check);
int ft_isascii(int check);
int	ft_isdigit(int check);
int ft_isprint(int check);
void *memchr(const void *s, int c, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
void *memcpy(void *dest, const void *src, size_t n);
void * memmove(void *dest, const void *src, size_t n);
void *memset(void *s, int c, size_t n);
char *strchr(const char *s, int c);
char *strdup(const char *s);
size_t ft_strlcat(char *dst, const char *src, size_t size);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlen(const char *str);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *strnstr(const char *big, const char *little, size_t len);
char *strrchr(const char *s, int c);
int tolower(int c);
int toupper(int c);
#endif