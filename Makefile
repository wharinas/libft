# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wharinas <wharinas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/08 16:27:36 by wharinas          #+#    #+#              #
#    Updated: 2022/05/10 03:28:26 by wharinas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

######################
# CONFIG - FILE & PATH
######################

NAME = libft.a

SOURCES_PATH = ./sources
OBJECTS_PATH = ./objects
HEADERS_PATH = ./includes
TEST_PATH    = ./test

SOURCES = $(wildcard $(SOURCES_PATH)/*.c)
OBJECTS = $(patsubst $(SOURCES_PATH)/%.c, $(OBJECTS_PATH)/%.o, $(SOURCES))
HEADERS = $(wildcard $(HEADERS_PATH)/*.h)

##################
# CONFIG - COMMAND
##################

CC                = gcc
CC_FLAG           = -Wall -Wextra -Werror
CC_STRICT         = $(CC) $(CC_FLAG)
ARCHIVE_AND_INDEX = ar -rcs
MAKE_EXTERNAL     = make -C
REMOVE            = rm -f

##########
# COMPILER
##########

all: msg_start $(NAME)

$(NAME) : $(HEADERS) $(OBJECTS)
	@echo "# MAKE .h FILE: "
	$(ARCHIVE_AND_INDEX) $(NAME) $(OBJECTS)

$(OBJECTS_PATH)/%.o: $(SOURCES_PATH)/%.c
	@echo "# MAKE OBJ FILE: $< >> $@ "
	$(CC_STRICT) -c $< -o $@

##########
# CLEAN
##########

clean:
	@$(REMOVE) $(OBJECTS)
	@$(MAKE_EXTERNAL) $(TEST_PATH) clean

fclean: clean
	@$(REMOVE) $(NAME)
	@$(MAKE_EXTERNAL) $(TEST_PATH) fclean

re: fclean all
	
######
# TEST
######

test: 
	@$(MAKE_EXTERNAL) $(TEST_PATH)

###########
# DEBUG MSG
###########

msg_start:
	@echo "################"
	@echo "# LIBFT MAKEFILE"
	@echo "################"

.PHONY: all clean fclean re test