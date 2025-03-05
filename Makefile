NAME = libft_linalg.a

CC = cc
CFLAGS = -c -Wall -Wextra -Werror
CPPFLAGS = -Iinclude -I$(LIBFTDIR)

SRCDIR = src
SRCFILES = vec2.c vec3.c vec3_cross.c vec4.c vector_utils.c vec_transform.c\
		mat2.c mat3.c mat4.c mat_col_to_vec.c mat_row_to_vec.c mat_to_str.c\
		mat23_rotate.c mat4_rotate.c
SRCS = $(addprefix $(SRCDIR)/, $(SRCFILES))

OBJDIR = obj
OBJFILES = $(SRCFILES:.c=.o)
OBJS = $(addprefix $(OBJDIR)/, $(OBJFILES))

ifndef LIBFTDIR
LIBFTDIR = ./libft
endif

AR = ar
AFLAGS = -crs

DEPDIR = dep

all: CFLAGS += -O3
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(AFLAGS) $(NAME) $(OBJS)

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(LIBFTDIR) $(OBJDIR)
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ $<

$(LIBFTDIR):
	@ git clone -b inc_math git@github.com:/MFelida/libft.git $(LIBFTDIR)

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

$(DEPDIR):
	@mkdir -p $(DEPDIR)

.PHONY: all clean fclean re
