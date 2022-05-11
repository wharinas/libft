# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wharinas <wharinas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/08 16:27:36 by wharinas          #+#    #+#              #
#    Updated: 2022/05/12 02:19:56 by wharinas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

######################
# CONFIG - FILE & PATH
######################

NAME = libft.a

SOURCES_PATH       = ./sources/mandatory
SOURCES_BONUS_PATH = ./sources/bonus
OBJECTS_PATH       = ./objects/mandatory
OBJECTS_BONUS_PATH = ./objects/bonus
HEADERS_PATH       = ./includes
TEST_PATH          = ./test

SOURCES = $(wildcard $(SOURCES_PATH)/*.c)
SOURCES_BONUS = $(wildcard $(SOURCES_BONUS_PATH)/*.c)
# SOURCES_BONUS = $(addprefix $(SOURCES_PATH) ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c)
OBJECTS = $(patsubst $(SOURCES_PATH)/%.c, $(OBJECTS_PATH)/%.o, $(SOURCES))
OBJECTS_BONUS = $(patsubst $(SOURCES_BONUS_PATH)/%.c, $(OBJECTS_BONUS_PATH)/%.o, $(SOURCES_BONUS))
# HEADERS = $(wildcard $(HEADERS_PATH)/*.h)
HEADERS = $(HEADERS_PATH)/libft.h

####################
# CONFIG - COMMAND #
####################

CC                = gcc
CC_FLAG           = -Wall -Wextra -Werror
CC_STRICT         = $(CC) $(CC_FLAG)
ARCHIVE_AND_INDEX = ar -rcs
MAKE_EXTERNAL     = make -C
REMOVE            = rm -f

#######################
# COMPILER: Mandatory #
#######################

all: mandatory
# all: bonus

mandatory : msg_start_mandatory $(HEADERS) $(OBJECTS)
	@echo " - ARCHIVE AND INDEX: "$(NAME) $(OBJECTS)
	@$(ARCHIVE_AND_INDEX) $(NAME) $(OBJECTS)

$(OBJECTS_PATH)/%.o: $(SOURCES_PATH)/%.c
	@echo " - MAKE OBJ (MANDATORY) FILE: $< >> $@ "
	@$(CC_STRICT) -I $(HEADERS_PATH) -c $< -o $@

###################
# COMPILER: Bonus
###################

bonus : msg_start_bonus $(OBJECTS_BONUS)
	@echo " - ARCHIVE AND INDEX: "$(NAME) $(OBJECTS_BONUS)
	@$(ARCHIVE_AND_INDEX) $(NAME) $(OBJECTS_BONUS)
	
$(OBJECTS_BONUS_PATH)/%.o: $(SOURCES_BONUS_PATH)/%.c
	@echo " - MAKE OBJ (BONUS) FILE: $< >> $@ " 
	@$(CC_STRICT) -I $(HEADERS_PATH) -c $< -o $@

##########
# CLEAN
##########

clean:
	@$(REMOVE) $(OBJECTS) $(OBJECTS_BONUS)
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

msg_start_mandatory:
	@echo "#############################"
	@echo "# LIBFT Makefile: Mandatory #"
	@echo "#############################"

msg_start_bonus:
	@echo "#########################"
	@echo "# LIBFT Makefile: Bonus #"
	@echo "#########################"

# msg_test:
# 	@echo $(HEADERS)

.PHONY: all mandatory bonus clean fclean re test