NAME = libft_linalg.a

CC = cc
CFLAGS = -c -Wall -Wextra -Werror
CPPFLAGS = -Iinclude

SRCDIR = src
SRCFILES = vec2.c
SRCS = $(addprefix $(SRCDIR)/, $(SRCFILES))

OBJDIR = obj
OBJFILES = $(SRCFILES:.c=.o)
OBJS = $(addprefix $(OBJDIR)/, $(OBJFILES))

AR = ar
AFLAGS = -crs

all: CFLAGS += -O3
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(AFLAGS) $(NAME) $(OBJS)

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ $<

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
