NAME			=		minitalk

CLIENT			=		client

SERVER			=		server

SRCS_SERVER		=		srcs/server.c \

SRCS_CLIENT		=		srcs/client.c \

OBJS_SERVER		=		$(SRCS_SERVER:.c=.o)

OBJS_CLIENT		=		$(SRCS_CLIENT:.c=.o)

LIB				=		make -C ./libft

CC				=		gcc

CFLAGS			=		-Wall -Werror -Wextra

RM				=		rm -f

$(NAME)			: 		$(SERVER) $(CLIENT)

server			:		$(OBJS_SERVER)
						$(LIB)
						$(CC) $(CFLAGS) $(OBJS_SERVER) libft/libft.a -o $(SERVER)

client			:		$(OBJS_CLIENT)
						$(CC) $(CFLAGS) $(OBJS_CLIENT) libft/libft.a -o $(CLIENT)

bonus			:		all

clean			:
						$(RM) $(OBJS_CLIENT)
						$(RM) $(OBJS_SERVER)
						cd ./libft && make clean

fclean			:		clean
						$(RM) $(CLIENT)
						$(RM) $(SERVER)
						cd ./libft && make fclean

all				:		$(NAME)

re				:		fclean all

.PHONY			:		clean fclean all re bonus client server
