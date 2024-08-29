NAME = cub3D
CC = gcc
CFLAGS = -Wextra -Werror -Wall -MMD -MP -g
FRAMEWORK = -framework OpenGL -framework AppKit
H_PATH = -I. -I ./libft
LIB_PATH = -L ./libft -L ./minilibx
LDLIBS = -lft -lmlx
LFT = libft/libft.a
LMLX = minilibx/libmlx.a
DODIR = dofile

SRCS = main.c \
	   init1.c \
	   init2.c \
	   parse.c \
	   parse_utils1.c \
	   parse_utils2.c \
	   safe_module.c \
	   utils1.c \
	   utils2.c \
	   handle_map_content1.c \
	   handle_map_content2.c \
	   game1.c \
	   game2.c \
	   check_h_intersection1.c \
	   check_h_intersection2.c \
	   check_v_intersection1.c \
	   check_v_intersection2.c \
	   check_intersection_utils.c \
	   render1.c \
	   render2.c \
	   move_player_fb.c \
	   move_player_lr.c \
	   move_utils.c \
	   rotate.c

OBJS = $(patsubst %.c,$(DODIR)/%.o,$(SRCS))
DEP = $(patsubst %.o,%.d,$(OBJS))

all:$(NAME)

-include $(DEP)

$(NAME): $(OBJS) $(LFT) $(LMLX)
	$(CC) $(CFLGAS) $(LIB_PATH) $(LDLIBS) $(FRAMEWORK) $(OBJS) -o $@

$(OBJS):$(DODIR)/%.o:%.c | $(DODIR)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(H_PATH) -c $< -o $@ -MF $(DODIR)/$*.d

$(DODIR):
	mkdir -p $@

$(LFT):
	make -C ./libft all
	make -C ./libft bonus

$(LMLX):
	make -C ./minilibx all

clean:
	rm -f $(OBJS) $(DEP)
	rm -rf $(DODIR)
	make -C ./libft fclean
	make -C ./minilibx clean

fclean: clean
	rm -f $(NAME)

re:fclean all

.PHONY: all clean fclean re



