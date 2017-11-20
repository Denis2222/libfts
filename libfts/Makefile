SRCS = put/ft_putchar.c \
	   put/ft_putstr.c \
	   put/ft_putnbr.c \
	   put/ft_putptr.c \
	   put/ft_putendl.c \
	   put/ft_putchar_fd.c \
	   put/ft_putstr_fd.c \
	   put/ft_putendl_fd.c \
	   put/ft_putnbr_fd.c \
	   put/ft_putulongnbr.c \
	   is/ft_isblank.c \
	   is/ft_isspace.c \
	   str/ft_strcmp.c \
	   str/ft_streachr.c \
	   str/ft_strcountchr.c \
	   str/ft_strcmp.c \
	   str/ft_strncat.c \
	   str/ft_strncmp.c \
	   str/ft_strrev.c \
	   str/ft_strnew.c \
	   str/ft_strstr.c \
	   str/ft_strnstr.c \
	   ./ft_tolower.c \
	   str/ft_strchr.c \
	   str/ft_strrchr.c \
	   str/ft_strrepchrbystr.c \
	   str/ft_strlcat.c \
	   str/ft_strdel.c \
	   str/ft_strclr.c \
	   str/ft_striter.c \
	   str/ft_striteri.c \
	   str/ft_strmap.c \
	   str/ft_strmapi.c \
	   str/ft_strdup.c \
	   str/ft_strequ.c \
	   str/ft_strnequ.c \
	   str/ft_strsub.c \
	   str/ft_strcpy.c \
	   str/ft_strncpy.c \
	   str/ft_strjoin.c \
	   str/ft_strtrim.c \
	   str/ft_strsplit.c \
	   str/ft_strcat.c \
	   str/ft_strrepchr.c \
	   mem/ft_memalloc.c \
	   mem/ft_memdel.c \
	   mem/ft_memccpy.c \
	   mem/ft_memcmp.c \
	   lst/ft_lstnew.c \
	   lst/ft_lstdelone.c \
	   lst/ft_lstdel.c \
	   lst/ft_lstadd.c \
	   lst/ft_lstpush.c \
	   lst/ft_lstpush_back.c \
	   lst/ft_lstiter.c \
	   lst/ft_lstmap.c \
	   lst/ft_lstlen.c \
	   lst/ft_lstrev.c \
	   ft_atoi.c \
	   ft_tabfree.c \
	   ft_itoa.c \
	   ft_sqrt.c \
	   ft_tablen.c \
	   ft_abs.c \
	   ft_pow.c \
	   get_next_line.c \
	   get_next_line_single.c \
	   printf/ft_printf.c \
	   printf/addchar.c \
	   printf/ft_itoa_base.c \
	   printf/ft_putw.c \
	   printf/ft_wcs.c \
	   printf/is.c \
	   printf/is2.c \
	   printf/t_opts.c \
	   printf/t_opts_analyse.c \
	   printf/t_opts_analyse_width.c \
	   printf/t_opts_put.c \
	   printf/t_opts_render.c \
	   printf/t_opts_render_numeric.c \
	   printf/t_opts_tools.c \
	   printf/t_opts_tools_prec.c \
	   printf/bonus.c \
	   printf/buffer.c \
	   printf/tools.c \
	   argvise.c

SRCASM = ft_isalpha.s \
	  ft_islower.s \
	  ft_isprint.s \
	  ft_isupper.s \
	  ft_isdigit.s \
	  ft_memmove.s \
	  ft_memchr.s \
	  ft_isalnum.s \
	  ft_toupper.s \
	  ft_strnvcpy.s \
	  ft_tolower.s \
	  ft_strlen.s \
	  ft_bzero.s \
	  ft_puts.s \
	  ft_memset.s \
	  ft_memcpy.s \
	  ft_cat.s \
	  ft_isascii.s

SRCDIRASM = ./srcasm/

SRCSASM = $(addprefix $(SRCDIRASM), $(SRCASM))
OBJSASM = $(addprefix $(OBJDIR), $(SRCASM:.s=.s.o))

NASM = nasm -f macho64

LIBA = libft.a
NAME = $(LIBA)
GCC_FLAGS = -Wall -Werror -Wextra
CC = gcc $(GCC_FLAGS)
SRCDIR = ./
OBJDIR = ./
AR = ar -cq
RM = rm -rf
# standart
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))

all: $(NAME)

toto:
	echo $(OBJSASM)

%.s.o: $(addprefix $(SRCDIRASM)/, %.s)
	$(NASM) $< -o $@
	@echo "[√]$^ "

$(NAME): $(OBJS) $(OBJSASM)
	@$(RM) $@
	@$(AR) $@ $^
	@echo "Link $^"
	@ranlib $@
	@echo "[$@] Complete"

$(addprefix $(OBJDIR)/, %.o): $(addprefix $(SRCDIR)/, %.c)
	@mkdir -p $(OBJDIR)
	@$(CC) -I. -o $@ -c $^
	@echo "[√]$^ "


clean:
	@$(RM) $(OBJS)
	@$(RM) $(OBJSASM)

fclean: clean
	@$(RM) $(LIBA)

re: fclean all
