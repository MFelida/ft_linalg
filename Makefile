NAME = libft_linalg.a

CC = cc
CFLAGS = -c -Wall -Wextra -Werror
CPPFLAGS = -Iinclude

SRCDIR = src
SRCFILES = vec2.c vec3.c vec4.c vector_utils.c \
		mat2.c mat_col_to_vec.c mat_row_to_vec.c mat_to_str.c
SRCS = $(addprefix $(SRCDIR)/, $(SRCFILES))

OBJDIR = obj
OBJFILES = $(SRCFILES:.c=.o)
OBJS = $(addprefix $(OBJDIR)/, $(OBJFILES))

AR = ar
AFLAGS = -crs

DEPDIR = dep

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

setup_libft: | $(DEPDIR)
	@make -C ../libft all
	@cp ../libft/libft.h ./include
	@cp ../libft/libft.a $(DEPDIR)

$(DEPDIR):
	@mkdir -p $(DEPDIR)

.PHONY: all clean fclean re setup_libft
