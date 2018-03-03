# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aherrera <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/01 20:19:58 by aherrera          #+#    #+#              #
#    Updated: 2018/03/03 13:05:45 by aherrera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
FILES_C = src/lst.c src/main.c src/minos*.c src/r_fi.c src/solve.c src/validate.c src/destroy_ar.c
FILES_O = lst.o main.o minos*.o r_fi.o solve.o validate.o destroy_ar.o

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror libft/*.c
	ar rc libft.a *.o
	gcc -c -Wall -Wextra -Werror $(FILES_C)
	gcc -o $(NAME) $(FILES_O) libft.a

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f libft.a

re: fclean all
