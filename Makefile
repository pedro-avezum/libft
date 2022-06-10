SRCS	= ./srcs/ft_atoi.c ./srcs/ft_bzero.c ./srcs/ft_calloc.c ./srcs/ft_isalnum.c ./srcs/ft_isalpha.c ./srcs/ft_isascii.c ./srcs/ft_isdigit.c ./srcs/ft_isprint.c ./srcs/ft_memchr.c ./srcs/ft_memcmp.c ./srcs/ft_memcpy.c ./srcs/ft_memmove.c ./srcs/ft_memset.c ./srcs/ft_memset.c ./srcs/ft_strchr.c ./srcs/ft_strdup.c./srcs/ft_strlcat.c ./srcs/ft_strlcpy.c ./srcs/ft_strlen.c ./srcs/ft_strncmp.c ./srcs/ft_strnstr.c ./srcs/ft_strrchr.c ./srcs/ft_tolower.c ./srcs/ft_toupper.c

OBJS	= ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o ft_memset.o ft_strchr.o ft_strdup.o ft_strlen.o ft_strlcat.o ft_strlcpy.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_tolower.o ft_toupper.o

CFLAGS	+= -Wall -Werror -Wextra -I./includes

NAME	= libft.a

HEADER	= ./includes/ft_libft.h

ALL:	.c.o
	ar rc $(NAME) $(OBJS) $(HEADER)

.c.o:
	gcc -c $(CFLAGS) $(SRCS)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean ALL

.phony: compile ALL clean fclean re