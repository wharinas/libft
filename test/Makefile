# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wharinas <wharinas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 02:41:42 by wharinas          #+#    #+#              #
#    Updated: 2022/05/10 01:35:14 by wharinas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#######################
# CONFIG - FILE & PATH.
#######################

NAME = test.a

HEADERS_PATH = ./includes
SOURCES_PATH = ./sources
OBJECTS_PATH = ./objects

SOURCES = $(wildcard $(SOURCES_PATH)/*.c)
OBJECTS = $(patsubst $(SOURCES_PATH)/%.c, $(OBJECTS_PATH)/%.o, $(SOURCES))
HEADERS = $(wildcard $(HEADER_PATH)/*.h)

##################
# CONFIG - COMMAND
##################

CC                = gcc
CC_FLAG           = -Wall -Wextra -Werror
CC_STRICT         = $(CC) $(CC_FLAG)
ARCHIVE_AND_INDEX = ar -rcs
REMOVE            =  rm -f

##########
# COMPILE
##########

all: test

$(NAME): $(HEADER) $(OBJECTS)
	@$(ARCHIVE_AND_INDEX) $(NAME) $(OBJECTS)

$(OBJECTS_PATH)/%.o: $(SOURCES_PATH)/%.c
	@$(CC_STRICT) -I $(HEADERS_PATH) -o $@ -c $< 

########
# CLEAN
########

clean:
	@$(REMOVE) $(OBJECTS)

fclean: clean
	@$(REMOVE) $(NAME) a.out

re: fclean all

##############
# COMPILE TEST
##############

TEST_FILE = main.c
TEST_EXCUTE = ./a.out

test: $(NAME)
	@$(CC_STRICT) -I $(HEADERS_PATH) $(TEST_FILE) $(NAME)
	@$(TEST_EXCUTE)


.PHONY: all clean fclean re test