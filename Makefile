NAME = libft_linalg.a

CC = cc
CFLAGS = -c -Wall -Wextra -Werror
CPPFLAGS = -Iinclude -I$(LIBFTDIR)

SRCDIR = src
SRCFILES = vec2.c vec3.c vec3_cross.c vec4.c vector_utils.c vec_transform.c\
		mat2.c mat3.c mat4.c mat_col_to_vec.c mat_row_to_vec.c mat_to_str.c\
		mat23_rotate.c mat4_rotate.c mat_translate.c
SRCS = $(addprefix $(SRCDIR)/, $(SRCFILES))

OBJDIR = obj
OBJFILES = $(SRCFILES:.c=.o)
OBJS = $(addprefix $(OBJDIR)/, $(OBJFILES))

LIBFTDIR = ./libft

AR = ar
AFLAGS = -crs

all: CFLAGS += -O3
all: $(NAME)

debug: CFLAGS += -O0 -g -DDEBUG
debug: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(AFLAGS) $(NAME) $(OBJS)

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(LIBFTDIR) $(OBJDIR)
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ $<

$(LIBFTDIR) $(LIBFT_DIR)/libft.h:
	@ git clone -b inc_math git@github.com:/MFelida/libft.git $(LIBFT_DIR)

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
