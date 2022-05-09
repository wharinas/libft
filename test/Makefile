# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wharinas <wharinas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 02:41:42 by wharinas          #+#    #+#              #
#    Updated: 2022/05/10 03:29:16 by wharinas         ###   ########.fr        #
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
CC_INCLUDES       = -I $(HEADERS_PATH) -I $(LIBFT_INCLUDES)
ARCHIVE_AND_INDEX = ar -rcs
REMOVE            = rm -f
MAKE_EXTERNAL     = make -C

##########
# COMPILE
##########

all: msg_start test

$(NAME): $(HEADER) $(OBJECTS)
	@$(ARCHIVE_AND_INDEX) $(NAME) $(OBJECTS)

$(OBJECTS_PATH)/%.o: $(SOURCES_PATH)/%.c
	@$(CC_STRICT) $(CC_INCLUDES) -o $@ -c $< 

########
# CLEAN
########

clean:
	@$(REMOVE) $(OBJECTS)

fclean: clean
	@$(REMOVE) $(NAME) $(TEST_EXCUTE_NAME)

re: fclean all

##############
# COMPILE TEST
##############

TEST_FILE = main.c
TEST_EXCUTE_NAME = a.out
TEST_EXCUTE = ./$(TEST_EXCUTE_NAME)

test: build_libft $(NAME)
	$(CC_STRICT) $(CC_INCLUDES) $(TEST_FILE) $(NAME) $(LIBFT)
	@$(TEST_EXCUTE)

########
# LIBFT
######## 

LIBFT_PATH = ..
LIBFT_INCLUDES = $(LIBFT_PATH)/includes
LIBFT = $(LIBFT_PATH)/libft.a

build_libft:
	$(MAKE_EXTERNAL) $(LIBFT_PATH)

###############
# DEBUG MESSAGE
###############

msg_start:
	@echo "################"
	@echo "# TEST MAKEFILE "
	@echo "################"


.PHONY: all clean fclean re test