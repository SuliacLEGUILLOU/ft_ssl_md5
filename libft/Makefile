# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/05 11:53:15 by sle-guil          #+#    #+#              #
#    Updated: 2015/11/21 12:59:50 by sle-guil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
LOGIN_AUTEUR = sle_guil
DEBUG = yes

HEADER = ./
SRCS =	ft_getopt.c \
		ft_isallow.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_islower.c \
		ft_isnumber.c \
		ft_isprint.c \
		ft_isspace.c \
		ft_isupper.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_atoi.c \
		ft_itoa.c \
		ft_getpow.c \
		ft_getsigne.c \
		ft_lstadd.c \
		ft_lstaddend.c \
		ft_lstdel.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstnew_id.c \
		ft_bzero.c \
		ft_memalloc.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memdel.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar.c \
		ft_putchar_fd.c \
		ft_putendl.c \
		ft_putendl_fd.c \
		ft_puthex.c \
		ft_putnbrhex.c \
		ft_putdou.c \
		ft_puthex_fd.c \
		ft_putnbrhex_fd.c \
		ft_putdou_fd.c \
		ft_putnbr.c \
		ft_putnbr_fd.c \
		ft_putstr.c \
		ft_putstr_fd.c \
		ft_strcat.c \
		ft_strchr.c \
		ft_strclr.c \
		ft_strcmp.c \
		ft_strcount_c.c \
		ft_strcpy.c \
		ft_strdel.c \
		ft_strdup.c \
		ft_strcdup.c \
		ft_strequ.c \
		ft_strerrase_c.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strjoin_str.c \
		ft_strlcat.c \
		ft_strlen.c \
		ft_strlen_unt_c.c \
		ft_strlsplit.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strmerge.c \
		ft_strmerge_buff.c \
		ft_strncat.c \
		ft_strnchr.c \
		ft_strncmp.c \
		ft_strncpy.c \
		ft_strnequ.c \
		ft_strnew.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strsplit.c \
		ft_strstr.c \
		ft_strsub.c \
		ft_strtrim.c \
		ft_freesplit.c \
		ft_tabsort_bub.c \
		get_next_line.c

OBJS = $(SRCS:.c=.o)

CC = clang
C_FLAG = -Wall -Wextra -Werror -pipe

ifeq ($(DEBUG), yes)
OPT_FLAG = -O0 -g3
else
OPT_FLAG = -DNDEBUG -Os -g0 -march=native
endif

#===============================#
#		Compilation rules 		#
#===============================#

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rcs $(NAME) $(OBJS)
	@echo "Libft is created and indexed."
	@echo "*** Flag : $(OPT_FLAG) ***"

%.o: %.c
	@$(CC) -o $@ -c $< $(C_FLAG) $(OPT_FLAG) -I $(HEADER)


#===============================#
#		repository rules		#
#===============================#

debug:
	@cat Makefile | sed "s/DEBUG = no/DEBUG = yes/" > Makefile
	@echo "DEBUG MODE SET"

product:
	@cat Makefile | sed "s/DEBUG = yes/DEBUG = no/" > Makefile
	@echo "DEBUG MODE UNSET"

norme:
	@norminette $(SRCS)

auteur:
	@echo "$(LOGIN_AUTEUR)" > auteur

#===============================#
#		Cleaning rules			#
#===============================#

clean:
	@/bin/rm -f $(OBJS)
	@echo "*** Object file cleaned ***"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "*** $(NAME) cleaned ***"

re: fclean all

.PHONY: all clean fclean re auteur
