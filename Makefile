NAME=libft.a
CFLAGS=-Wall -Wextra -Werror
SRCS=ft_atoi.c ft_calloc.c \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
	ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_strdup.c \
	ft_toupper.c ft_tolower.c \
	ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c
BONUS_SRCS=ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS=$(SRCS:.c=.o)
BONUS_OBJS=$(SRCS:.c=.o) $(BONUS_SRCS:.c=.o)
ifdef BONUS_FLG
OBJS=$(BONUS_OBJS)
endif

AR_FLAGS=rcs

all: $(NAME)

bonus:
	$(MAKE) BONUS_FLG=1

$(NAME): $(OBJS)
	$(AR) $(AR_FLAGS) $(NAME) $(OBJS)

$(OBJS):


.PHONY: clean fclean re test

clean:
	$(RM) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
