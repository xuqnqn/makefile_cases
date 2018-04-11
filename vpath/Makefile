
CC = gcc


CFLAGS = -Iinclude
VPATH = include lib src

OBJD		= 	obj

C_FILES		+=	bar.c
C_FILES		+=	foo.c
C_FILES		+=	main.c

#OBJS = bar.o foo.o main.o
OBJS 		=	$(patsubst %.c, $(OBJD)/%.o, $(C_FILES))

.PHONY: all
all: setup prog

.PHONY: setup
setup:
	@mkdir -p $(OBJD)

prog: $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJD)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf $(OBJS) prog
