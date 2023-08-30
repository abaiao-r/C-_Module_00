# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 18:27:51 by abaiao-r          #+#    #+#              #
#    Updated: 2023/08/30 18:54:37 by abaiao-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler settings	
COMPILER = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g 

# Directories
SRCDIR = src
OBJDIR = objs

# Source Files

SRCS = 	$(SRCDIR)/megaphone.cpp

OBJS = 	$(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)


# Targets
NAME = megaphone

all: 	$(NAME)


clean:
		rm -rf $(OBJDIR)

fclean:	clean
		rm -f $(NAME)

run:	fclean all
		./$(NAME)

re:		fclean all

test: 	fclean all
		./$(NAME) "shhhhh... I think the students are asleep..."
		./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
		./$(NAME)


$(NAME): 	$(OBJS)
			$(COMPILER) $(OBJS) $(CFLAGS) -o  $(NAME) 

%.o: %.c
	$(COMPILER) -Wall -Wextra -Werror -c $< -o $@ 

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(COMPILER) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re run test
